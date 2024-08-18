/*
Scrivere un programma che chiede all’utente di inserire da tastiera una matrice 3X3 con soli valori maggiori o uguali a zero.
○ Il programma, dopo aver stampato la matrice a video, verifica se la matrice è pari o meno e stampa un opportuno messaggio a video.
○ Una matrice si dice pari se è composta di soli valori pari.
○ Ad esempio, se l’utente inserisce la seguente matrice
4 0 2
4 4 6
6 4 8
L’output sarà del tipo: Matrice pari? 1
*/

#include <stdio.h>
#define D 3

int main() {
    int Matrix[D][D];
    int I, J;
    int Joker = 1;

    printf("Please, give me a matrix:\n");
    for (I = 0; I < D; I ++) {
        for (J = 0; J < D; J ++) {
            scanf("%d", &Matrix[I][J]);
        }
    }

    for (I = 0; I < D; I ++) {
        for (J = 0; J < D; J ++) {
            printf("%d\t", Matrix[I][J]);

            if (Matrix[I][J] % 2 != 0) {
                Joker = 0;
            }
        }
        printf("\n");
    }

    if (Joker == 1) {
        printf("Your matrix is even");
    } else {
        printf("Your matrix is NOT even");
    }

}
