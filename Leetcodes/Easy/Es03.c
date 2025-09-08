/*
🧩 Descrizione:
Scrivi un programma in C che:

Chiede all’utente quanti numeri vuole inserire (massimo 100).
Legge i numeri in un array.
Trova e stampa il valore massimo e il suo indice.
🔧 Requisiti:
Usa un array di tipo int.
Usa un ciclo for per inserire i dati.
Usa un ciclo per trovare il massimo.
Gestisci input scorretto (ad esempio, numero fuori dal range).
 */

#include <stdio.h>
#define MAX_SIZE 100

int max(int *array, int size);
int min(int *array, int size);

int main() {
  int size;
  // Function prototypes to fix implicit declaration errors

  printf("Hello pal, please give me a size for your array:\n");

  do {
    scanf("%d", &size);
  } while (size <= 0 || size > MAX_SIZE);

  printf("Now please populate it:\n");

  int array[size];

  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  int maximum = max(array, size);
  int minimum = min(array, size);

  printf("The max is: %d\nAnd the min: %d", maximum, minimum);
}

int max(int *array, int size) {
  int max = array[0];
  for (int i = 0; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  return max;
}

int min(int *array, int size) {
  int min = array[0];

  for (int i = 0; i < size; i++) {
    if (min > array[i])
      min = array[i];
  }

  return min;
}
