import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);;
        String type;
        String operation;
        float x, y;
        char operand;

        System.out.println("Welcome to the calculator app!\nChoose you fighter:");
        System.out.println("Type \"BASIC\" to use a basic calculator or \"SCIENTIFIC\" for a scientific one");

        do { 
            type = scanner.nextLine();
            type = type.toUpperCase();
        } while (!type.equals("BASIC") && !type.equals("SCIENTIFIC"));

        System.out.println("Thanks, now type your operations");
        operation = scanner.nextLine();
        operation = operation.toLowerCase();

        UserInput input = new UserInput(operation);
        
        if (type.equals("BASIC")) {
            // BasicCalc calc = new BasicCalc(x, operand, y);

        }
        if (type.equals("SCIENTIFIC")) {
            // ScientificCalc calc = new ScientificCalc(x, operand, y);
        }
    }
}
