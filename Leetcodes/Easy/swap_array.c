/*
 * Swap Pairs in ArrayConsegna: Scrivi una funzione in C che scambia coppie
 adiacenti di elementi in un array di uint32_t, modificandolo in-place con O(1)
 spazio extra. L'array termina con (uint32_t)-1 come sentinella. No librerie
 standard o allocazione dinamica.Input: uint32_t* arr (termina con -1).Output:
 Array modificato in-place.Esempio:Input: [1, 2, 3, 4, (uint32_t)-1] Output: [2,
 1, 4, 3, (uint32_t)-1] Input: [1, (uint32_t)-1] Output: [1, (uint32_t)-1]

 Vincoli:Almeno 1 elemento valido.
 Valori: 0 ≤ arr[i] ≤ 2^32 - 2.

 Rilevanza embedded: Ottimizza la memoria per buffer di dati.

 */

#include <stdio.h>
#define SIZE 6

int *swap(int *array) {
  int temp;

  for (int i = 0; i < SIZE; i += 2) {
    temp = array[i + 1];
    array[i + 1] = array[i];
    array[i] = temp;
  }

  return array;
}

int *scan_array(int *array) {

  for (int i = 0; i < SIZE; i++) {
    scanf("%d", &array[i]);
  }
  return array;
}

void print_array(int *array) {
  for (int i = 0; i < SIZE; i++) {
    printf("%d ", array[i]);
  }
}

int main() {
  int array[SIZE];

  scan_array(array);

  print_array(array);
  printf("\n");

  swap(array);
  print_array(array);
}
