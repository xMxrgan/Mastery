/*
Array e Stringhe: Rotate ArrayConsegna: Scrivi una funzione in C che ruoti un
array di interi di k posizioni a destra, modificando l'array in-place. Usa al
massimo O(1) spazio extra (escluse variabili temporanee). Non usare funzioni di
libreria standard. Gestisci casi in cui k è maggiore della lunghezza
dell'array.Input:arr: array di interi n: dimensione dell'array k: numero di
rotazioni a destra

Output: Modifica arr in-place.Esempio:Input: arr = [1, 2, 3, 4, 5], n = 5, k = 2
Output: arr = [4, 5, 1, 2, 3]
Input: arr = [1, 2], n = 2, k = 3
Output: arr = [2, 1] (k = 3 equivale a k = 1, perché 3 % 2 = 1)

Vincoli:1≤n≤10001 \leq n \leq 10001 \leq n \leq 1000

0≤k≤1090 \leq k \leq 10^90 \leq k \leq 10^9

Gli elementi dell'array sono interi a 32 bit.

Note per embedded: Questo tipo di operazione è comune nei buffer circolari per
la gestione di dati in streaming (es. sensori o comunicazioni seriali).

 */
#include <stdio.h>
#define SIZE 5

void scan_array(int *array) {
  for (int i = 0; i < SIZE; i++) {
    scanf("%d", &array[i]);
  }
}
void print_array(int *array) {
  for (int i = 0; i < SIZE; i++) {
    printf("%d ", array[i]);
  }
}

int *rotate(int *array, int k, char direction) {
  int start, end;

  if (k >= SIZE) {
    k = k % SIZE;
  }

  if (direction == 'l') {

    while (k > 0) {
      start = array[0];
      for (int i = 0; i < SIZE - 1; i++) {
        array[i] = array[i + 1];
      }

      array[SIZE - 1] = start;
      k--;
    }
  }

  if (direction == 'r') {
    while (k > 0) {
      end = array[SIZE - 1];

      for (int i = SIZE - 1; i > 0; i--) {
        array[i] = array[i - 1];
      }
      array[0] = end;

      k--;
    }
  }

  return array;
};

int main() {
  int array[SIZE];
  int k;
  printf("Please, give me an array of 10:\n");
  scan_array(array);
  print_array(array);

  printf("\n");
  printf("Now I'll rotate it, give me a number:\n");
  scanf("%d", &k);
  char direction = 'l';
  int *rotated = rotate(array, k, direction);
  print_array(rotated);
}
