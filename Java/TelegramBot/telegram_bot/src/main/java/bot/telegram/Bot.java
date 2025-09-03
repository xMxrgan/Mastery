
package bot.telegram;

import java.lang.reflect.InvocationTargetException;
import org.telegram.telegrambots.meta.TelegramBotsApi;
import org.telegram.telegrambots.meta.exceptions.TelegramApiException;
import org.telegram.telegrambots.meta.generics.BotSession;
import org.telegram.telegrambots.meta.generics.LongPollingBot;
import org.telegram.telegrambots.updatesreceivers.DefaultBotSession;

public class Bot {

    private Class<? extends BotSession> botSessionClass = DefaultBotSession.class;

    public BotSession registerBot(LongPollingBot bot) throws TelegramApiException {
        if (bot == null) {
            throw new TelegramApiException("Parameter bot can't be null!");
        }
        if (!validateBotUsernameAndToken(bot)) {
            throw new TelegramApiException("Bot token and username can't be empty");
        }
        bot.onRegister();
        bot.clearWebhook();
        BotSession session;

        try {
            session = botSessionClass.getConstructor().newInstance();
        } catch (NoSuchMethodException | IllegalAccessException | InvocationTargetException | InstantiationException exc) {
            throw new TelegramApiException(exc);
        }

        session.setToken(bot.getBotToken());
        session.setOptions(bot.getOptions());
        session.setCallback(bot);
        session.start();
        return session;
    }

    private boolean validateBotUsernameAndToken(LongPollingBot bot) {
        return bot.getBotToken() != null && !bot.getBotToken().isEmpty() &&
               bot.getBotUsername() != null && !bot.getBotUsername().isEmpty();
    }

    public static void main(String[] args) {
        try {
            TelegramBotsApi botsApi = new TelegramBotsApi(DefaultBotSession.class);
            botsApi.registerBot(new Monitoring());
            System.out.println("Bot started!");
        } catch (TelegramApiException e) {
            e.printStackTrace();
        }
    }
}
