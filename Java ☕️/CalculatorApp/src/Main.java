import java.util.Scanner;

public class Main {
    static String calcType;
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String string;

        System.out.println("Welcome to the calculator app!\nChoose you fighter:");
        System.out.println("Type \"BASIC\" to use a basic calculator or \"SCIENTIFIC\" for a scientific one");

        do { 
            calcType = scanner.nextLine();
            calcType = calcType.toUpperCase();
        } while (!calcType.equals("BASIC") && !calcType.equals("SCIENTIFIC"));

        System.out.println("Thanks, now type your operations");
        string = scanner.nextLine();
        string = string.toLowerCase();

        UserInput input = new UserInput(string);

        if (calcType.equals("BASIC")) {
            if (isInteger(input.getX()) && validOperand(input.getOperand(), calcType) && isInteger(input.getY())) {
                BasicCalc calc = new BasicCalc(input.getX(), input.getOperand(), input.getY());
            } else {
                System.out.println("This operation is too difficult or this operator is not supported, matters for a more \"scientist\" calculator");
            }
        }
        if (calcType.equals("SCIENTIFIC")) {
            // ScientificCalc calc = new ScientificCalc(x, operand, y);
        }
    }

    private static boolean isInteger(double num) {
        return num % 1 == 0;
    }
    private static boolean validOperand(char operand, String calcType) {
        if (calcType.equals("BASIC")) {
            switch (operand) {
                case '+': return true;
                case '-': return true;
                case '*': return true;
                case '/': return true;
                case '%': return true;
                default: return false;
            }
        } else {
            switch (operand) {
                case '+': return true;
                case '-': return true;
                case '*': return true;
                case '/': return true;
                case '%': return true;
                case 's': return true;
                case 'c': return true;
                case 't': return true;
                case 'l': return true;
                case '^': return true;
                default: return false;
            } 
        }

    }

}
