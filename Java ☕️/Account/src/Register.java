import java.io.Console;
import java.util.Scanner;

public class Register {
    private String username;
    private String password;
    private long balance;

    public Register(String username, String password) {
        this.username = username;
        this.password = password;
        this.balance = 0;
    }

    public String getUsername() {
        return username;
    }
    public String getPassword() {
        return password;
    }

    public static void registerUser() {
        Scanner input = new Scanner(System.in);
        Console console = System.console();
        if (console == null) {
            System.err.println("No console available");
            System.exit(1);
        }
        
        System.out.println("Per registrarti scegli il tuo username:");
        String username = input.nextLine();
        System.out.println("E una password:");
        String password;

            do { 
                char [] passwordArray = console.readPassword();
                password = new String(passwordArray);
            } while (!isPasswordStrong(password));

        Register user1 = new Register(username, password);
        System.out.println("Utente registrato con successo");
    }

    public static boolean isPasswordStrong(String password) {
        int flag = 0;
    
        if (password.length() < 6) {
            System.out.println("Deve essere più di 8 caratteri");
            flag = 1;
            }
        if (!password.matches(".*[A-Z].*")) {
            System.out.println("Deve contenere almeno un carattere maiuscolo");
            flag = 1;
        }
        if (!password.matches(".*\\d.*")) {
            System.out.println("Deve contenere almeno un numero");
            flag = 1;
        }
        
        return flag == 0;
    }
}
