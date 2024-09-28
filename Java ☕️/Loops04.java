/*
- Dati in input due numeri interi n e y entrambi > 0, stampare a video quante cifre di n
sono divisori di y. Esempio se n=156 e y=48 l’output sarà 2 (le cifre 1 e 6 di n sono
divisori di 48).

  */

import java.util.Scanner;

class Main {
  public static void main (String[] args) {
    int Num1, Num2, Result;

    Scanner scanner = new Scanner(System.in);
    
    System.out.println("Please, give me 2 numbers:");
    Num1 = scanner.nextInt();
    Num2 = scanner.nextInt();

    Result = divisors(Num1, Num2);
    
    System.out.println(Result);
    
  }

  public static int divisors (int num1, int num2) {
    int k = 0;
    while (num1 > 0) {
      if (num2 % (num1 % 10) == 0) {
        k++;
      }
      num1 /= 10;
    }

    return k;
  }

  
}
