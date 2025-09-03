/*
Scrivere un programma C che chiede all’utente un
numero intero n. Il programma inizializza il contenuto
della matrice seguendo il seguente schema:
n n+1 n+2 n+3 n+4
n+1 n+1 n+2 n+3 n+4
n+2 n+2 n+2 n+3 n+4
n+3 n+3 n+3 n+3 n+4
n+4 n+4 n+4 n+4 n+4
Per esempio se n=5, il programma popolerà la matrice
come segue:
5 6 7 8 9
6 6 7 8 9
7 7 7 8 9
8 8 8 8 9
9 9 9 9 9
*/

#include <stdio.h>
#define D 5

int main() {
    int M[D][D];
    int Number;
    int I;
    int Joker = 0;
    int Count;

    printf("Please, gime me your number\n");

    scanf("%d", &Number);

    for (I = 0; I < D; I ++) {
        M[I][I] = Number;
    }


}



