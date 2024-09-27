/*
Scrivere un programma Java che chiede in ingresso due numeri a e b e verifica se a
e' multiplo di b, oppure b è multiplo di a e stampa un opportuno messaggio a video

Scrivere un programma che chiede all'utente due caratteri e verifica se sono uno il
successivo dell'altro (ad esempio i caratteri 'a' e 'b' sono uno il successivo dell'altro)

Si scriva un programma, in linguaggio Java, che legga da input le lunghezze dei lati
di un triangolo e determini se il triangolo è equilatero, isoscele o scaleno
*/

import java.util.Scanner;

  public class Main {
    public static void main (String[] args) {
      int A, B, C;

      Scanner scanner = new Scanner(System.in);

      System.out.println("Hello, please tell me your name:");
      String Name = scanner.nextLine();

      System.out.println("Nice to meet you " + Name);

      System.out.println("Now please, give me 2 numbers, il tell you which one is multiple of the other:");

      A = scanner.nextInt();
      scanner.nextLine();
      B = scanner.nextInt();

      System.out.println("You gave me " + A + " and " + B);

      if (A % B == 0) {
        System.out.println(A + " is multiple of " + B);
      } else if (B % A == 0 ){
        System.out.println(B + " is multiple of " + A);
      } else {
        System.out.println("They aren't multipliers!");
      }

      System.out.println("Now, please give me 3 numbers and I'll figure a triangle with these edges:");
      A = scanner.nextInt();
      scanner.nextLine();
      B = scanner.nextInt();
      scanner.nextLine();
      C = scanner.nextInt();
      scanner.nextLine();

      isTriangle(A, B, C);
      
    }

    static void isTriangle(int a, int b,  int c) {
      if (a == b && b == c) {
        System.out.println("Equilater");
      } else if (a == b && b != c) {
        System.out.println("Isoscile");
      } else if (a == c && c != b) {
        System.out.println("Isoscile");
      } else {
        System.out.println("Scaleno");
      }
    }
  }
