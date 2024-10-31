import java.util.Scanner;

class App {
    public static void main(String[] args) {
        int choice;

        System.out.println("Benvenuto, registrati o accedi per utilizzare l'app.\nPremi \"1\" per registrarti, \"2\" per accedere o \"3\" per uscire");
        Scanner input = new Scanner(System.in);
        choice = input.nextInt();
        input.nextLine();

        switch (choice) {
            case 0: {
                System.out.println("Sei uscito");
                break;
            }
            case 1:{
                Register.registerUser();
            }
            case 2: {
                System.out.println("Not yet implemented, sorry pal");
                break;
            }
            default: {
                System.err.println("Error!");
            }
        }
    }
}