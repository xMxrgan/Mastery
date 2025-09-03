import java.util.Random;

public class Date {
    private int day;
    private int month;
    private int year;
    private Language language = Language.ITALIAN;

    Random random = new Random();

    private String[] englishMonths = {
        "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
    };
    private String[] italianMonths = {
        "Gennaio", "Febbraio", "Marzo", "Aprile", "Maggio", "Giugno", "Luglio", "Agosto", "Settembre", "Ottobre", "Novembre", "Dicembre"
    };
    private String[] frenchMonths = {
        "Janvier", "Février", "Mars", "Avril", "Mai", "Juin", "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre"
    };
    private int[] daysInMonths = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    public Date(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
        verify();
    }
    public Date(int day, int month) {
        this(day, month, 2024);
    }
    public Date(int day) {
        this(day, 11);
    }
    public Date() {
        this.day = random.nextInt(31) + 1;
        this.month = random.nextInt(12) + 1;
        this.year = random.nextInt(800) + 1400;
    }

    private void verify() {                                     // Missing the leap year
        if (this.month < 1 || this.month > 12 || this.day < 1 || this.day > daysInMonths[month - 1]) {
            System.out.println("Error!");
        }
    }

    public void setLanguageToEnglish() {
        language = Language.ENGLISH;
    }
    public void setLanguageToItalian() {
        language = Language.ITALIAN;
    }
    public void setLanguageToFrench() {
        language = Language.FRENCH;
    }
    public String getLanguage() {
        switch (language) {
            case ENGLISH:
                return "The language is english";
            case ITALIAN:
                return "La lingua è italiana";
            case FRENCH:
                return "La langue est française";
            default:
                return "No language";
        }
    }

    public String getDate() {
        switch(language) {
            case ENGLISH:
                return englishMonths[this.month - 1] + " " + this.day + " " + this.year;
            case ITALIAN: 
                return this.day + " " + italianMonths[this.month - 1] + " " + this.year;
            case FRENCH:
                return this.day + " " + frenchMonths[this.month - 1] + " " + this.year;
            default:
                return "You haven't selected any language";
        } 
    }
}