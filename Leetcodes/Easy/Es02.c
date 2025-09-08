/*
Chiede all’utente quanti numeri vuole inserire.
Li memorizza in un array (statico va bene per ora).
Calcola e stampa la somma di tutti gli elementi.
🔧 Requisiti:
Usa un array di tipo int.
Usa un ciclo for per riempire l’array e un altro per sommare.
Gestisci un numero massimo (es. MAX_SIZE = 100).
 */

#include <stdio.h>
#define MAX_SIZE 100

int main() {
  int num;
  int sum = 0;
  printf("How many numbers do you want to insert?\n");

  do {
    scanf("%d", &num);
  } while (num > MAX_SIZE || num <= 0);

  int array[num];

  printf("Give me the numbers:\n");
  for (int i = 0; i < num; i++) {
    scanf("%d", &array[i]);
  }

  for (int i = 0; i < num; i++) {
    sum += array[i];
  }

  printf("%d", sum);
}
