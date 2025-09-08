#include <stdio.h>
#define SIZE 5

int main() {
  int array[SIZE];
  for (int i = 0; i < SIZE; i++) {
    scanf("%d", &array[i]);
  }

  for (int i = 1; i < SIZE; i++) {
    int k = i;

    while (k > 0 && array[k - 1] > array[k]) {
      int temp = array[k];
      array[k] = array[k - 1];
      array[k - 1] = temp;
      k--;
    }
  }

  for (int i = 0; i < SIZE; i++) {
    printf("%d ", array[i]);
  }
}
