package Folder;
/*
 * Si scriva una sottoclasse Square di Rectangle che rappresenta un quadrato,
 * con un costruttore che riceve colore e lato double del quadrato. Non si
 * ridefiniscano i metodi double perimeter() e double area().
 * Il metodo String toString() deve invece essere ridefinito in modo da
 * ritornare la stringa "Square, a " seguita dalla chiamata al toString() della
 * superclasse.
 */

public class Square extends Rectangle {
    double side;

    public Square(Color color, double side) {
        super(color, side, side);
    }

    public double perimeter() {
        return side * 4;
    }

    public double area() {
        return side * side;
    }

    public String toString() {
        return "Square of " + super.toString();
    }
}
