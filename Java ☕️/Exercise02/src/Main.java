//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
/*
Si scriva un programma Java che legge un intero non negativo n da tastiera e stampa una cornice n x n:
@@@@@
@    @
@    @
@    @
@    @
@@@@@
 */

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("Please, give me a number:");
        int Number = scanningTime();
        printSquare(Number);
    }

    private static int scanningTime () {
        Scanner scanner = new Scanner(System.in);
        return scanner.nextInt();
    }

    private static void printSquare(int n) {
        char at = '@';
        char space = ' ';

        for (int i = 1; i <= n; i ++) {
            for (int j = 1; j <= n; j ++) {

                if (i == 1 || i == n || j == 1 || j == n) {
                    System.out.print('@');
                } else {
                    System.out.print(' ');
                }
            }
            System.out.println();
        }

    }
}



