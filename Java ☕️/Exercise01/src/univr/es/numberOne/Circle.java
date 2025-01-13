package univr.es.numberOne;

public class Circle {
    private double x, y, radius = 1.0;

    public Circle(double x, double y) {
        this.x = x;
        this.y = y;
    }

    protected  boolean check() {
        return (x * x) + (y * y) <= (radius * radius);
    }


}
