/*
Scrivere un programma che data una matrice int
A[M][M] esegua la sommatoria di tutti gli
elementi che si trovano sopra la diagonale
principale.
*/


#include <stdio.h>
#define M 3

int main() {
    int A[M][M];
    int I, J;
    int Joker = 0;

    printf("Please, give me a matrix:\n");
    for (I = 0; I < M; I ++) {
        for (J = 0; J < M; J ++) {
            scanf("%d", &A[I][J]);
        }
    }

    printf("Your matrix is:\n");
    for (I = 0; I < M; I ++) {
        for (J = 0; J < M; J ++) {
            printf("%d\t", A[I][J]);
        }
        printf("\n");
    }

    for (I = 0; I < M; I ++) {
        for (J = I; J <= M; J ++) {
            Joker += A[I][J];
        }
    }

    printf("The sum of the upper diagonal is: %d", Joker);
}
