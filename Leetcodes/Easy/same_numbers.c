#include <stdio.h>
#define SIZE 6

int main() {
  int flag = 0;
  int min;
  int array[SIZE];

  for (int i = 0; i < SIZE; i++) {
    scanf("%d", &array[i]);
  }

  for (int i = 0; i < SIZE; i++) {
    for (int j = i + 1; j < SIZE; j++) {

      if (array[i] == array[j]) {

        if (!flag) {
          min = array[i];
          printf("%d\n", min);
          flag++;

        } else {
          if (min >= array[i]) {
            min = array[i];

            printf("%d\n", min);
          }
        }
      }
    }
  }

  printf("HELLO");

  if (flag) {
    printf("%d", min);
  }

  else {
    printf("There is no couple");
  }
}
