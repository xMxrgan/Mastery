public class Date {
    private int day, month, year;
    private Language language = Language.ENGLISH;

    private static final String[] englshMonths = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    private static final String[] italianMonths = {
        "Gennaio", "Febbraio", "Marzo", "Aprile", "Maggio", "Giugno",
        "Luglio", "Agosto", "Settembre", "Ottobre", "Novembre", "Dicembre"
    };
    private static final String[] frenchMonths = {
        "Janvier", "Février", "Mars", "Avril", "Mai", "Juin",
        "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre"
    };
    private static final int[] daysInMonths = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    public Date(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
        verify();
    }

    public Date(int day, int month) {
        this (day, month, 2024);
    }

    public Date(int day) {
        this(day, 9, 2024);
    }

    public void verify() {
        if (month < 1 || month > 12 || day > daysInMonths())
        System.out.println("Date not valid!");
    }

    private int daysInMonths() {
        if (month == 2 && isLeap()) {
            return 29;
        } else {
            return daysInMonths[month - 1];
        }
    }

    private boolean isLeap() {
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }
/*
    public void setLanguage(Language language) {
        this.language = language;
    }
    */
    public void setLanguageToEnglish(Language language) {
        this.language = Language.ENGLISH;
    }
    public void setLanguageToItalian(Language language) {
        this.language = Language.ITALIAN;
    }
    public void setLanguageToFrench(Language language) {
        this.language = Language.FRENCH;
    }

    public String getDate() {
        switch (language) {
            case ENGLISH:
            return englshMonths[this.month - 1] + " " + this.day + " " + this.year;
            case ITALIAN:
            return this.day + " " + italianMonths[this.month - 1] + " " + this.year;
            case FRENCH:
            return this.day + " " + frenchMonths[this.month - 1] + " " + this.year;
            default:
            return "The present is now";
        }
    }
}