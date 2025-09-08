/*
🧩 Descrizione:
Scrivi un programma che verifica se due array di interi sono anagrammi numerici:

Due array sono anagrammi se contengono gli stessi elementi (anche ripetuti), ma
in ordine diverso. 🔧 Requisiti: Chiedi n, lunghezza degli array (max 100).
Inserisci array1 e array2.
Usa una funzione:
int sono_anagrammi(int a[], int b[], int size);
Non usare qsort() (scrivi tu un algoritmo di ordinamento).
Puoi usare bubble sort o insertion sort per ordinare entrambi.
Dopo l'ordinamento, confronta elemento per elemento.
 */

#include <stdio.h>
#define SIZE 8

void populate_array(int *array, int size) {
  int elem;

  for (int i = 0; i < size; i++) {
    scanf("%d", &elem);
    while (elem < 0) {
      printf("Please, give me positive numbers:");
      scanf("%d", &elem);
    }

    array[i] = elem;
  }
}

int calculate(int *array1, int *array2) {

  for (int i = 0; i < SIZE; i++) {
    int flag = 0; // While 1 the numbers are present

    for (int j = 0; j < SIZE; j++) {
      if (array1[i] == array2[j]) {
        flag = 1;
      }
    }

    if (flag == 0) {
      return 0;
    }
  }

  return 1;
}

int main() {
  int array1[SIZE];
  int array2[SIZE];

  populate_array(array1, SIZE);
  populate_array(array2, SIZE);

  if (calculate(array1, array2)) {
    printf("Anagram");
  } else {
    printf("NOT anagram");
  }
}
