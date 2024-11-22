package Date;

public class ItalianDate extends Date {
        private Language language = Language.ITALIAN;
        public static String[] italianMonths = {
                        "Gennaio", "Febbraio", "Marzo", "Aprile",
                        "Maggio", "Giugno", "Luglio", "Agosto",
                        "Settembre", "Ottobre", "Novembre", "Dicembre"
        };
        public static String[] italianSeasons = {
                        "Primavera", "Estate", "Autunno", "Inverno"
        };

        public ItalianDate(int day, int month, int year) {
                super(day, month, year);
        }

        public ItalianDate(int day, int month) {
                super(day, month);
        }

        public ItalianDate(int day) {
                super(day);
        }

        public ItalianDate() {
                super();
        }

        public String setSeason(Season season) {
                switch (season) {
                        case SPRING:
                                return "Primavera";
                        case SUMMER:
                                return "Estate";
                        case AUTUMN:
                                return "Autunno";
                        case WINTER:
                                return "Inverno";
                        default:
                                return "No season set";
                }
        }

        public String toString() {
                return getDay() + " " + italianMonths[getMonth() - 1] + " " + getYear() + ", è "
                                + setSeason(getSeason()) + " e parliamo " + setLanguage(language);
        }
}
