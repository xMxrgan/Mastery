/*
Scrivere una funzione ricorsiva che dato un array di interi, la sua dimensione effettiva e qualsiasi altro parametro ritenuto utile, calcola la somma degli elementi dell’array.
*/

#include <stdio.h>
#define DIM 5

int sum(int *, int);

int main(){
    int Result;
    int *Array[DIM];

    printf("Please, now provide me all the elements of the array\n");
    for (int J = 0; J < DIM; J ++) {
        scanf("%d", &Array[J]);
    }

    Result = sum(Array, DIM);

    printf("%d is the sum of the elements in your array!", Result);
}

int sum(int *array, int dim) {
    int result;

    if (dim == 0) {
        return 0;
    } else {
        return *array + sum(*array + 1, dim - 1);
    }
}
