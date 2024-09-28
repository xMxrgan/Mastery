/*
- Dato un numero intero n >0 letto da tastiera, stampare a video quante cifre pari
contiene. Esempio, il numero 8 ha 1 cifra pari, il numero 256 ha 2 cifre pari.
  */

import java.util.Scanner;

class Main {
  public static void main (String[] args) {
    int Number = receive();

    System.out.println("Your number is " + Number);

    int Figures = EvenFigures(Number);
    System.out.println("It contains " + Figures + " even figures!");
    
  }

  public static int receive () {
    Scanner scanner = new Scanner(System.in);
    
    int number = scanner.nextInt();
    
    while (number <= 0) {
      System.out.println("Please, your number have to be greater than zero");
      number = scanner.nextInt();
    }

    return number;
  }

  public static int EvenFigures(int number) {
    int count = 0;
    
    while (number > 0) {
      if ((number % 10) % 2 == 0) {
        count ++;
      }
      number /= 10;
    }

    return count;
  }
}
