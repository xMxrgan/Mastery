package Date;

public class EnglishDate extends Date {
        private Language language = Language.ENGLISH;
        public static String[] englishMonths = {
                        "January", "February", "March", "April",
                        "May", "June", "July", "August",
                        "September", "October", "November", "December"
        };

        public static String[] englishSeasons = {
                        "Spring", "Summer", "Autumn", "Winter"
        };

        public EnglishDate(int day, int month, int year) {
                super(day, month, year);
        }

        public EnglishDate(int day, int month) {
                super(day, month);
        }

        public EnglishDate(int day) {
                super(day);
        }

        public EnglishDate() {
                super();
        }

        public String setSeason(Season season) {
                switch (season) {
                        case SPRING:
                                return "Spring";
                        case SUMMER:
                                return "Summer";
                        case AUTUMN:
                                return "Autumn";
                        case WINTER:
                                return "Winter";
                        default:
                                return "No season set";
                }
        }

        public String toString() {
                return englishMonths[getMonth() - 1] + "/" + getDay() + "/" + getYear() + ", it's "
                                + setSeason(getSeason()) + " and we speak " + setLanguage(language);
        }
}
