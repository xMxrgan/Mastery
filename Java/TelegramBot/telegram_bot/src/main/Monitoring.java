/* package bot.telegram;

import java.io.IOException;

import org.telegram.telegrambots.bots.TelegramLongPollingBot;
import org.telegram.telegrambots.meta.api.methods.send.SendMessage;
import org.telegram.telegrambots.meta.api.objects.Update;
import org.telegram.telegrambots.meta.exceptions.TelegramApiException;

import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;

public class Monitoring extends TelegramLongPollingBot {
    private final String apiKey = "cd5f6358-70f1-4d24-b678-7b9a331578f7";
    private final OkHttpClient okHttpClient = new OkHttpClient();

    @Override
    public String getBotToken() {
        return "7620745885:AAEaLE6u4nAGkwD57qn2zpIcrJe1_EPXBDU";
    }

    @Override
    public String getBotUsername() {
        return "@FinanXpertBot";
    }

    private String getCoinPrice(String coin) {
        String url = "https://pro-api.coinmarketcap.com/v1/cryptocurrency/quotes/latest?symbol=" + coin.toUpperCase();

        Request request = new Request.Builder()
            .url(url)
            .addHeader("X-CMC_PRO_API_KEY", apiKey)
            .build();

        try (Response response = okHttpClient.newCall(request).execute()) {
            if (!response.isSuccessful()) throw new IOException("Unexpected code " + response);

            // Assuming the response body contains the price in JSON format
            return response.body().string();
        } catch (IOException e) {
            e.printStackTrace();
            return "Error fetching price";
        }
    }

    @Override
    public void onUpdateReceived(Update update) {
        if (update.hasMessage() && update.getMessage().hasText()) {
            String textMessage = update.getMessage().getText();
            String chatID = update.getMessage().getChatId().toString();
            String price = getCoinPrice(textMessage);
            sendMessage(chatID, "Il prezzo di " + textMessage + " è: " + price);
        }
    }

    private void sendMessage(String chatId, String text) {
        try {
            execute(new SendMessage(chatId, text));
        } catch (TelegramApiException e) {
            e.printStackTrace();
        }
    }
}
    */

package bot.telegram;

import java.io.IOException;

import org.json.JSONObject;
import org.telegram.telegrambots.bots.TelegramLongPollingBot;
import org.telegram.telegrambots.meta.api.methods.send.SendMessage;
import org.telegram.telegrambots.meta.api.objects.Update;
import org.telegram.telegrambots.meta.exceptions.TelegramApiException;

import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;

public class Monitoring extends TelegramLongPollingBot {
    private final String apiKey = "cd5f6358-70f1-4d24-b678-7b9a331578f7";
    private final OkHttpClient okHttpClient = new OkHttpClient();

    @Override
    public String getBotToken() {
        return "7620745885:AAEaLE6u4nAGkwD57qn2zpIcrJe1_EPXBDU";
    }

    @Override
    public String getBotUsername() {
        return "FinanXpertBot";
    }

    private String getCoinPrice(String coin) {
        String url = "https://pro-api.coinmarketcap.com/v1/cryptocurrency/quotes/latest?symbol=" + coin.toUpperCase();

        Request request = new Request.Builder()
            .url(url)
            .addHeader("X-CMC_PRO_API_KEY", apiKey)
            .build();

        try (Response response = okHttpClient.newCall(request).execute()) {
            if (!response.isSuccessful()) throw new IOException("Unexpected code " + response);

            JSONObject jsonObject = new JSONObject(response.body().string());
            return jsonObject.getJSONObject("data")
                             .getJSONObject(coin.toUpperCase())
                             .getJSONObject("quote")
                             .getJSONObject("USD")
                             .getString("price");
        } catch (IOException e) {
            e.printStackTrace();
            return "Errore nel recupero del prezzo";
        }
    }

    @Override
    public void onUpdateReceived(Update update) {
        if (update.hasMessage() && update.getMessage().hasText()) {
            String textMessage = update.getMessage().getText().trim();
            String chatID = update.getMessage().getChatId().toString();
            String price = getCoinPrice(textMessage);

            sendMessage(chatID, "Il prezzo di " + textMessage.toUpperCase() + " è: " + price);
        }
    }

    private void sendMessage(String chatId, String text) {
        try {
            execute(new SendMessage(chatId, text));
        } catch (TelegramApiException e) {
            e.printStackTrace();
        }
    }
}
