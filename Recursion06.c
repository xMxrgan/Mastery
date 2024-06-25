/*
Scrivere una funzione ricorsiva int cifra(int num,
int k) che ritorna la k-esima cifra di num
partendo da destra. Ad esempio cifra(829, 2)
restituisce 2.

*/
#include <stdio.h>
int k_esima(int num, int k) {
  int result;

  if (k == 1) {
    result = num % 10;
  } else {
    result = k_esima(num / 10, k - 1);
  }

  return result;
}

int main() {
  int Num, K;
  int Result;

  printf("Give me the whole number.\n");
  scanf("%d", &Num);
  printf("Now choose whichever digit do you prefer.\n");
  scanf("%d", &K);

  Result = k_esima(Num, K);

  printf("%d", Result);
}
