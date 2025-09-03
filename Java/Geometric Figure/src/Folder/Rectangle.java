package Folder;
/*
 * Si scriva una sottoclasse Rectangle di Figure che rappresenta un rettangolo,
 * con un costruttore che riceve colore, base e altezza double del rettangolo e
 * in cui i metodi double perimeter() e double area() sono ridefiniti in modo da
 * ritornare perimetro ed area del rettangolo, rispettivamente.
 * Il metodo String toString() deve essere ridefinito in modo da ritornare la
 * stringa "Rectangle of " seguita dalla chiamata al toString() della
 * superclasse.
 */

public class Rectangle extends Figure {
    private final double base;
    private final double height;

    public Rectangle(Color color, double base, double height) {
        super(color);
        this.base = base;
        this.height = height;
    }

    public double perimeter() {
        return (base + height) * 2;
    }

    public double area() {
        return base * height;
    }

    public String toString() {
        return "Rectangle of " + super.toString();
    }
}