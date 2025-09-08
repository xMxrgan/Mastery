#include <stdio.h>
#define MAX 1000

int isPrime(int num);

int main() {
  int num;
  printf("Please, give me a number:\n");

  do {
    scanf("%d", &num);
  } while (num <= 0 || num > MAX);

  if (isPrime(num)) {
    printf("Your number is prime.");
  } else {
    printf("Your number is NOT prime.");
  }
}

int isPrime(int num) {
  int count;

  for (int i = 2; i < num; i++) {
    if (num % i == 0)
      return 0;
  }
  return 1;
}
