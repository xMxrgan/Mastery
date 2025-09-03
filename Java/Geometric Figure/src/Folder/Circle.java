package Folder;
/*
 * Si scriva una sottoclasse Circle di Figure che rappresenta un cerchio, con un
 * costruttore che riceve colore e raggio double del cerchio e in cui i metodi
 * double perimeter() e double area() sono ridefiniti in modo da ritornare
 * perimetro ed area del cerchio, rispettivamente. Il metodo String toString()
 * deve essere ridefinito in modo da ritornare la stringa "Circle of " seguita
 * dalla chiamata al toString() della superclasse.
 */

public class Circle extends Figure {
    double radius;

    public Circle(Color color, double radius) {
        super(color);
    }

    public double perimeter() {
        return 2 * Math.PI * radius;
    }

    public double area() {
        return Math.PI * radius * radius;
    }

    public String toString() {
        return "Circle of " + super.toString();
    }
}
