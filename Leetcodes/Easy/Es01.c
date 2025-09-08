/*
 Stampa i numeri da 1 a 100, ma:
 Se divisibile per 3, stampa "Fizz".
 Se divisibile per 5, stampa "Buzz".
 Se per entrambi, "FizzBuzz".
 */

#include <stdio.h>
int main() {

  for (int i = 1; i <= 100; i++) {
    printf("%d:", i);
    if (i % 3 == 0 && i % 5 == 0) {
      printf("FizzBuzz");

    } else {
      if (i % 3 == 0)
        printf("Fizz");

      if (i % 5 == 0)
        printf("Buzz");
    }

    printf("\n");
  }
}
