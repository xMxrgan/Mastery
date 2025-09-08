/*
Palindrome
 🧩 Descrizione:
 Scrivi un programma in C che:

 Chiede all’utente quanti numeri vuole inserire (massimo 100).
 Legge i numeri in un array.
 Verifica se l’array è palindromo (cioè si legge uguale da sinistra a destra e
da destra a sinistra). Stampa Palindromo o Non palindromo. 🔧 Requisiti: Usa un
array int[]. Usa una funzione: int is_palindrome(int array[], int size); che
restituisce 1 se l’array è palindromo, 0 altrimenti. Gestisci l’input utente con
validazione.

 */

#include <stdio.h>
#define SIZE 8

int palindrome(int array[], int size) {

  for (int i = 0; i < size / 2; i++) {
    if (array[i] != array[size - 1 - i]) {
      return 0;
    }
  }

  return 1;
}

int main() {
  int elem;
  int array[SIZE];
  printf("Please, give me an array of 8 positive elements:\n");

  for (int i = 0; i < 8; i++) {
    scanf("%d", &elem);

    while (elem < 0) {
      printf("Please, give me a positive number:\n");
      scanf("%d", &elem);
    }

    array[i] = elem;
  }

  int result = palindrome(array, 8);

  if (result) {
    printf("Palindrome");
  } else {
    printf("NOT palindrome");
  }
}
