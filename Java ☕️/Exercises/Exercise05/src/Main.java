import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int Num;
        Scanner scanner = new Scanner(System.in);

        System.out.println("Hello user, please give me a number:");
        do {
            Num = scanner.nextInt();
        } while (Num <= 2);

        for (int i = 0; i < Num; i++) {
            for (int j = 0; j < Num - i; j++) {
                System.out.print(" ");
            }
            for (int k = 0; k < i * 2 - 1; k++) {
                System.out.print("@");
            }

            System.out.println();
        }        
    }
}
