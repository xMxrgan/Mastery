
import java.util.Scanner;

public class MainPalindrome {
    public static void main(String[] args) throws Exception {
        String string;
        Scanner scanner = new Scanner(System.in);
        Palindrome palindrome;

        do {
            string = scanner.nextLine();
            palindrome = new Palindrome(string);
        } while (!palindrome.isPalindrome(string));
    }
}
