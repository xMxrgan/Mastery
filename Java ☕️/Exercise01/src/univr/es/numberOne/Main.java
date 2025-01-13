package univr.es.numberOne;

import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int Number;
        double x, y;
        long Dentro = 0;

        Circle circle;

        System.out.println("Hello user, please give me a positive number and I will create such number of couples to check!");

        Scanner keyboard = new Scanner(System.in);
        Random random = new Random();
        
        do { 
            Number = keyboard.nextInt();
        } while (Number < 0);

        for (int i = 0; i <= Number; i ++) {
            x = random.nextDouble(-1, 1);
            y = random.nextDouble(-1, 1);
            System.out.println("(" +  x + "," + y + ")");

            circle = new Circle(x, y);

            if (circle.check()) {
                Dentro ++;
            }
        }

        System.out.println((double) Dentro * 4 / Number);

        keyboard.close();        
    }
}
