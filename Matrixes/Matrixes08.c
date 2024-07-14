/*
Scrivere un programma che permette all’utente di inserire una matrice di valori interi di dimensione NxN (con N pari a 5). Il programma deve poi calcolare e stampare l’indice della colonna in cui la massima differenza (in valore assoluto) ottenuta tra due suoi elementi, sia massima. Nel caso ci sia più̀ di una colonna con uguale differenza massima, stamperà l'indice della prima colonna trovata.
Ad esempio, se la matrice inserita fosse:
2   5   10  15  18
11  7   7   20  15
5   5   7   11  22
6   1   3   16  19
7   1   2   10  18
Il programma stamperà̀ l’indice 3: tale colonna ha come massima differenza 10 (diff. tra 20 e 10), ed è maggiore della differenza massima delle altre quattro colonne, rispettivamente 9, 6, 8 e 7.
*/

#include <stdio.h>
#define N 5

int main () {
    int Matrix[N][N];
    int I, J;
    int Max, Min, Dist, NumCol;
    
    pritnf("please, give me your 5 x 5 matrix:\n");
    
    for (I = 0; I < N; I ++) {
        for (J = 0; J < N; J ++) {
            scanf("%d", &Matrix[I][J]);
        }
    }
    
    pritnf("Your matrix is:\n");
    
    for (I = 0; I < N; I ++) {
        Max = 0;
        Min = 0;
        
        for (J = 0; J < N; J ++) {
            
            if (Matrix[I][J] > Max || ) {
                
            }
            
            if (Matrix[I][J] < Min ) {
                
            }
            
        }
        
        if ((Max - Min) > Dist) {
            Dist = Max - Min;
            NumCol = I;
        }
        
    }

}
