public class Palindrome {
    String string;
    int first, second;

    public Palindrome(String string) {
        this.string = string;
    }

    public boolean isPalindrome(String string) {
        first = 0;
        second = string.length() - 1;

        while (first < second) {
            if (string.charAt(first) != string.charAt(second)) {
                return false;
            }
            first ++;
            second --;
        }
        System.out.println("Finally, you found it!");
        return true;
    }
}
