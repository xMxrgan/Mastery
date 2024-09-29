/*
Data una sequenza di numeri interi che termina con lo 0 (sentinella), stampare a
video quanti multipli di 5 o di 7 sono contenuti nella sequenza (attenzione, se un
numero è divisore sia di 5 che di 7 non deve essere contato 2 volte).
*/

import java.util.Scanner;

class Main {
    public static void main (String[] args) {

        int Count = 0;

        int Number = numberReceiver();
        while (Number != 0) {
            if (multipliers(Number) == 1)  Count ++;
            Number = numberReceiver();
        }

        System.out.println(Count);
    }

    public static int numberReceiver() {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        return num;
    }

    public static int multipliers(int num) {
        if (num % 5 == 0 || num % 7 == 0) {
            return 1;
        } else {
            return 0;
        }
    }
}
