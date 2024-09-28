/*
Esercizi con i cicli:
- Scrivere un programma che stampa la tavola pitagorica di un numero
*/

import java.util.Scanner;

class Main {
  public static void main (String[] args) {

    System.out.println("Give me a number");
    int Num = Receive();
    System.out.println("Your number is " + Num);
    Pitagora(Num);
  }

  static int Receive () {
    Scanner numero = new Scanner(System.in);

    int num = numero.nextInt();
    
    return num;
  }
  
  static void Pitagora(int num) {
    int dim = 10;

    for (int i = 1; i <= dim; i++) {
      for (int j = 1; j <= dim; j++) {
        System.out.print(num * i * j + "\t");
      }
      System.out.println();
    }
  }
}
  


