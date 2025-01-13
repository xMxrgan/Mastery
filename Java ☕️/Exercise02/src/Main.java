import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        int Num;
        Scanner scanner = new Scanner(System.in);

        System.out.println("Hello user, please give me a number and I will build a square of @s for you!");

        do {
            Num = scanner.nextInt();
        } while (Num < 1);

        for (int i = 1; i <= Num; i ++) {
            for (int j = 1; j <= Num; j ++) {

                if ((i == 1 || i == Num) && (j == Num)) {
                    System.out.printf(" ");
                } else {
                    if ((i > 1 && i < Num) && (j > 1 && j < Num)) {
                        System.out.printf(" "); 
                    } else {
                        System.out.printf("@");
                    }
                }

            }
            System.out.println();
        }

        scanner.close();
    }
}

