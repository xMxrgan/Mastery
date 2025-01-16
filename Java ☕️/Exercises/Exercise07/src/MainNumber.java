import java.util.Scanner;

public class MainNumber {
    public static void main(String[] args) {
        int num;
        Scanner scanner = new Scanner(System.in);

        // Ensure the user enters a non-negative integer
        do {
            System.out.print("Enter a non-negative integer: ");
            num = scanner.nextInt();
        } while (num < 0);

        // Create a BinaryNumber object and display its string representation
        BinaryNumber binaryNumber = new BinaryNumber(num);

        System.out.println(binaryNumber.toString());

        scanner.close();
    }
}

