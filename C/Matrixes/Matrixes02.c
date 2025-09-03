/*
Scrivere un programma che chiede all’utente di riempire una matrice quadrata 5x5 di caratteri (qualsiasi valore char). Il programma individua il carattere che compare più frequentemente e lo mostra a schermo (si ipotizzi che sia sempre unico). Inoltre il programma visualizza il contenuto della matrice, mostrando però un asterisco al posto dei caratteri uguali a quello individuato.
*/

#include <stdio.h>
#define D 2

int main() {
    char Matrix[D][D];
    int I, J, Count = 0, Max = 0;
    char Joker;
    char Freq;

    printf("Please, give me the numbers of the matrix:\n");
    for (I = 0; I < D; I ++) {
        for (J = 0; J < D; J ++) {
            scanf("%c ", &Matrix[I][J]);
        }
    }

    for (I = 0; I < D; I ++) {
        for (J = 0; J < D; J ++) {

            Joker = Matrix[I][J];

            for (I = 0; I < D; I ++) {
                for (J = 0; J < D; J ++) {

                    if (Joker == Matrix[I][J]) {
                        Count ++;
                    }
                }
            }

            if (Count > Max) {
                Max = Count;
                Freq = Joker;
            }

        }
    }

    printf("%c", Joker);
}
