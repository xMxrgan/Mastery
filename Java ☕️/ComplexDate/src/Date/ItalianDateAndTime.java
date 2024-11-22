package Date;

import java.time.LocalTime;

public class ItalianDateAndTime extends ItalianDate {
    LocalTime time = LocalTime.now();
    private int hour, mins, secs;

    public ItalianDateAndTime() {
        super();
        this.hour = time.getHour();
        this.mins = time.getMinute();
        this.secs = time.getSecond();
    }

    public String toString() {
        return hour + ":" + mins + ":" + secs;
    }
}
