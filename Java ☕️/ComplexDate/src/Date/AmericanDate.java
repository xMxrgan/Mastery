package Date;

public class AmericanDate extends Date {
    private Language language = Language.AMERICAN;
    public static String[] englishMonths = {
            "January", "February", "March", "April",
            "May", "June", "July", "August",
            "September", "October", "November", "December"
    };
    public static String[] englishSeasons = {
            "Spring", "Summer", "Fall", "Winter"
    };

    public AmericanDate(int day, int month, int year) {
        super(day, month, year);
    }

    public AmericanDate(int day, int month) {
        super(day, month);
    }

    public AmericanDate(int day) {
        super(day);
    }

    public AmericanDate() {
        super();
    }

    public String setSeason(Season season) {
        switch (season) {
            case SPRING:
                return "Spring";
            case SUMMER:
                return "Summer";
            case AUTUMN:
                return "Fall";
            case WINTER:
                return "Winter";
            default:
                return "No season set";
        }
    }

    public String toString() {
        return englishMonths[getMonth() - 1] + "-" + getDay() + "-" + getYear() + ", it's " + setSeason(getSeason())
                + " and we speak " + setLanguage(language);
    }
}
