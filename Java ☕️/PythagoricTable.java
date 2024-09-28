/*
Esercizi con i cicli:
- Scrivere un programma che stampa la tavola pitagorica di un numero
- Dato un numero intero n >0 letto da tastiera, stampare a video quante cifre pari
con<ene. Esempio, il numero 8 ha 1 cifra pari, il numero 256 ha 2 cifre pari.
- Da< in input due numeri interi n e y entrambi > 0, stampare a video quante cifre di n
sono divisori di y. Esempio se n=156 e y=48 l’output sarà 2 (le cifre 1 e 6 di n sono
divisori di 48).
- Data una sequenza di numeri interi che termina con lo 0 (sentinella), stampare a
video quan< mul<pli di 5 o di 7 sono contenuti nella sequenza (a:enzione, se un
numero è divisore sia di 5 che di 7 non deve essere contato 2 volte).
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
  


