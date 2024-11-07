import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int day, month, year;
        Language language = Language.ENGLISH;

        Scanner scanner = new Scanner(System.in);

        Date d1 = new Date(23, 2);
        System.out.println(d1.getDate());

        d1.setLanguageToFrench(language);
        System.out.println(d1.getDate());
        
        d1.setLanguageToItalian(language);
        System.out.println(d1.getDate()); 
    }
}