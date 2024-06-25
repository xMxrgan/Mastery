/*
Scrivere una funzione ricorsiva che dato un array di interi, la sua dimensione effettiva e qualsiasi altro parametro ritenuto utile, calcola la somma degli elementi dell’array.
*/

#include <stdio.h>
#include <stdlib.h>
#define DIM 5

int sum(int *, int);
int main(){
    int Result;
    int *Array;
    int J, Num;

    printf("Please, give me the number of elements in the array.\n");
    scanf("%d", &Num);

    Array = (int *)malloc(Num * sizeof(int));

    printf("Please, now provide me all the elements of the array\n");
    for (J = 0; J < Num; J ++) {
        scanf("%d", &Array[J]);
    }

    Result = sum(Array, Num);

    printf("%d is the sum of the elements in your array!", Result);

    free(Array);
}

int sum(int *array, int num) {
    int result;

    if (num == 0) {
        result = num;
    } else {
        result = array[0] + sum(array + 1, num - 1);
    }

    return result;
}
