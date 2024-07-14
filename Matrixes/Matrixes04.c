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

    for (I = 0; I < M; I ++) {
        for (J = 0; J < M; J ++) {
            scanf("%d", &A[I][J]);
        }
    }

    for (I = 0; I < M; I ++) {
        for (J = 0; J < M; J ++) {
            printf("%d", A[I][J]);
        }
    }


    printf("%d", A[0][2]);

}
