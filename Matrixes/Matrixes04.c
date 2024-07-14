/*
Scrivere un programma che data una matrice int
A[M][M] esegua la sommatoria di tutti gli
elementi che si trovano sopra la diagonale
principale.
*/

/*
Scrivere un programma che data una matrice int A[M][M] verifichi se per ogni elemento x della diagonale principale esiste un elemento y della diagonale secondaria tale che y>x.
*/

#include <stdio.h>
#define M 3

int main() {
    int A[M][M];
    int Num, J, I;
    int X, Y;
    int Joker = 0, Count = 0;                                        // Flag

    for (J = 0; J < M; J ++) {
        for (I = 0; I < M; I ++) {
            scanf("%d", &A[J][I]);
        }
    }

    for (J = 0; J < M; J ++) {
        for (I = 0; I < M; I ++) {
            printf("%d\t", A[J][I]);
        }
        printf("\n");
    }

    for (X = 0; X < M; X ++) {
        Joker = 0;

        for (Y = M - 1; Y >= 0; Y --) {

            if (A[X][X] < A[X][Y]) {
                Joker = 1;
            }
        }

        if (Joker == 1) {
            Count ++;
        }
    }

    if (Count == M) {
        printf("For each element of the main diagonal there is a bigger element in the secondary diagonal");
    } else {
        printf("For each element of the main diagonal there is NOT a bigger element in the secondary diagonal");
    }

}
