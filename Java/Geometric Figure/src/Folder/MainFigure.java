package Folder;

public class MainFigure {
    public static void main(String[] args) {
        Figure figure1 = new Figure(Color.BLUE);
        Rectangle rectangle = new Rectangle(Color.RED, 23, 11);

        System.out.println(figure1.getColor());
        figure1.setColor(Color.BLACK);

        System.out.println(figure1.getColor());
        System.out.println(figure1.toString());

        System.out.println(rectangle.getColor());
        System.out.println(rectangle.toString());
    }
}
