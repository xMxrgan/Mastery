

public class MainDate {
    public static void main(String[] args) {

        Date date = new Date();
        System.out.println(date.getDate());
        date.setLanguageToEnglish();
        System.out.println(date.getDate());
        date.setLanguageToFrench();
        System.out.println(date.getDate());
        Date date1 = new Date(8);
        System.out.println(date1.getDate());
        
        System.out.println(date.getLanguage());

        System.out.println(date1.getLanguage());

    }
}