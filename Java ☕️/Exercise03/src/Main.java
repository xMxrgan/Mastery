//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
/*Si scriva un programma che legge n >= 1 da tastiera e stampa una piramide di altezza n.
Per esempio, per n = 4 deve stampare:
  @
  @@
 @@@@
@@@@@@
*/

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int Number = insertNum();

        createTriangle(Number);
    }

    public static int insertNum () {
        Scanner Keyboard = new Scanner(System.in);
        return Keyboard.nextInt();
    }

    public static void createTriangle(int n) {
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n + 2; j++) {
                if () {
                    System.out.print('@');
                } else {
                    System.out.print(' ');
                }
            }
        }
    }
}
