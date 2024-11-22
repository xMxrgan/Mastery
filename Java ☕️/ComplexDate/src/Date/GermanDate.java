package Date;

public class GermanDate extends Date {
    private Language language = Language.GERMAN;
    public static String[] germanMonths = {
            "Januar", "Februar", "März", "April",
            "Mai", "Juni", "Juli", "August",
            "September", "Oktober", "November", "Dezember"
    };

    public static String[] germanSeasons = {
            "Frühling", "Sommer", "Herbst", "Winter"
    };

    public GermanDate(int day, int month, int year) {
        super(day, month, year);
    }

    public GermanDate(int day, int month) {
        super(day, month);
    }

    public GermanDate(int day) {
        super(day);
    }

    public GermanDate() {
        super();
    }

    public String setSeason(Season season) {
        switch (season) {
            case SPRING:
                return "Frühling";
            case SUMMER:
                return "Sommer";
            case AUTUMN:
                return "Herbst";
            case WINTER:
                return "Winter";
            default:
                return "No season set";
        }
    }

    public String toString() {
        return getDay() + " " + germanMonths[getMonth() - 1] + " " + getYear() + ", es ist " + setSeason(getSeason())
                + " und wir sprechen " + setLanguage(language);
    }

}