package Date;

import java.time.LocalDate;
import java.util.Scanner;

public class Date {
    LocalDate localDate = LocalDate.now();
    Scanner scanner = new Scanner(System.in);
    private int day, month, year;
    static Language language;
    static Season season;

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
        this.day = day;
        this.month = month;
        this.year = localDate.getYear();
    }

    public Date(int day) {
        this.day = day;
        this.month = localDate.getMonthValue();
        this.year = localDate.getYear();
    }

    public Date() {
        this.day = localDate.getDayOfMonth();
        this.month = localDate.getMonthValue();
        this.year = localDate.getYear();
    }

    private void verify() {
        if (month < 1 || month > 12 || day < 1 || day > daysInMonths[month - 1] /* && !isLeapYear() */) {
            System.out.println("Error!");
        }
    }

    /*
     * private boolean isLeapYear() {
     * return year % 4 == 0 && year % 100 == 0;
     * }
     */

    public String getDate(int day, int month, int year) {
        return day + "/" + month + "/" + year + "";
    }

    protected int getDay() {
        return day;
    }

    protected int getMonth() {
        return month;
    }

    protected int getYear() {
        return year;
    }

    protected Season getSeason() {
        if ((month == 12 && day >= 21) || (month == 1) || (month == 2) || (month == 3 && day < 21)) {
            return Season.WINTER;
        }
        if ((month == 3 && day >= 21) || (month == 4) || (month == 5) || (month == 6 && day < 21)) {
            season = Season.SPRING;
        }
        if ((month == 6 && day >= 21) || (month == 7) || (month == 8) || (month == 9 && day < 23)) {
            season = Season.SUMMER;
        }
        if ((month == 9 && day >= 23) || (month == 10) || (month == 11) || (month == 12 && day < 21)) {
            season = Season.AUTUMN;
        }
        return season;
    }

    public String setLanguage(Language language) {
        switch (language) {
            case ENGLISH:
                return "english";
            case AMERICAN:
                return "american english";
            case ITALIAN:
                return "italiano";
            case GERMAN:
                return "deutsche";
            default:
                return "No language set";
        }
    }

    public String getLanguage() {
        return setLanguage(language);
    }

    public String setSeason(Season season) {
        switch (season) {
            case SPRING:
                return "spring";
            case SUMMER:
                return "summer";
            case AUTUMN:
                return "autumn";
            case WINTER:
                return "winter";
            default:
                return "No season set";
        }
    }

    public String toString() {
        return "";
    }
}
