package Date;

public class MainDate {
    public static void main(String[] args) throws Exception {

        Date date1 = new Date(12, 12, 1900);

        AmericanDate americanDate = new AmericanDate();
        ItalianDate italianDate = new ItalianDate(22);
        GermanDate germanDate = new GermanDate(9, 11);
        EnglishDate englishDate = new EnglishDate(3, 9, 2000);
        ItalianDateAndTime italianDateAndTime = new ItalianDateAndTime();

        System.out.println(americanDate.toString());
        System.out.println(italianDate.toString());
        System.out.println(germanDate.toString());
        System.out.println(englishDate.toString());
        System.out.println(italianDateAndTime.toString());

    }
}
