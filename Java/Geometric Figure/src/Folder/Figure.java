package Folder;
/*
 * Si scriva una classe Figure che rappresenta una figura geometrica colorata.
 * Tale classe deve avere un costruttore che riceve un Color.
 * Deve avere un metodo double perimeter() e un metodo double area(); fate
 * ritornare ad entrambi 0.
 * Inoltre deve avere un metodo String toString() che ritorna la stringa
 * "area: A, perimeter: P, color: C", dove A è l'area della figura, P è il
 * perimetro della figura e C è il colore della figura. Infine, deve avere un
 * metodo accessore protected per il colore.
 */

public class Figure {
    private Color color;

    public Figure(Color color) {
        this.color = color;
    }

    protected void setColor(Color color) {
        this.color = color;
    }

    protected String getColor() {
        switch (color) {
            case RED:
                return "red";
            case GREEN:
                return "green";
            case BLUE:
                return "blue";
            case WHITE:
                return "white";
            case BLACK:
                return "black";
            default:
                return "No color set";
        }
    }

    public double perimeter() {
        return 0.0;
    }

    public double area() {
        return 0.0;
    }

    public String toString() {
        return "area: " + area() + ", perimeter: " + perimeter() + ", color: " + getColor();
    }

}
