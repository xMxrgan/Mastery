//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
/*
Si scriva un programma che legge da tastiera un long non negativo n e lo richiede a oltranza se
l'utente lo inserisse negativo.
Quindi genera n coppie (x,y) fatte da due numeri casuali di tipo double, fra -1 e 1.
Per ogni coppia controlla se la coordinata (x,y) sta dentro il cerchio di raggio 1 centrato sull'origine degli assi e in tal caso incrementa una variabile dentro di tipo long.
 Alla fine stampa il valore della formula dentro * 4 / n senza perdere le cifre che seguono la virgola.
 */

import java.util.Scanner;
import java.util.Random;

public class Main {
    public static void main(String[] args) {
        int Number, Count = 0;
        double X, Y, Dentro = 0.0;

        do {
            System.out.println("Please, give me a positive number:");
            Number = readNumber();
        } while (Number <= 0);

        while (Count < Number) {
            X = generateNumber();
            Y = generateNumber();
            System.out.println("(" + X + ";" + Y +")");

            if (checkFit(X, Y)) {
                Dentro ++;
            }

            Count ++;
        }

        System.out.println(Dentro * 4 / Number);

    }


    public static int readNumber () {
        int number;
        Scanner Keyboard = new Scanner(System.in);
        number = Keyboard.nextInt();
        return number;
    }

    public static double generateNumber() {
        Random number = new Random();
        return number.nextDouble(2) - 1;
    }

    public static boolean checkFit(double x, double y) {
        return (x * x) + (y * y) <= 1;
    }
}


