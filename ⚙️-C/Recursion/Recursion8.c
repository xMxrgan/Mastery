/*
La serie “buffa” di interi è così definita: gli elementi di posizione 1, 2 e 3 valgono tutti e tre 1, e in generale l'elemento di posizione i (con i >= 4) è uguale alla somma degli elementi di posizione i - 1 e i - 3. A partire da questa definizione si ricava ad esempio che i numeri della serie buffa di posizione da 1 a 9 sono 1, 1, 1, 2, 3, 4, 6, 9, 13.
Scrivere la versione ricorsiva della funzione che calcola l’elemento di posizione 'z' della serie buffa.
*/

#include<stdio.h>
#define DIM 5

int posizioneZ(int z) {
    int result;
    int buffa[3] = {1, 1, 1};
    int next = buffa[2] + buffa[0];

    if (z == 1) {
        result = next;
    } else {
        buffa[0] = buffa[1];
        buffa[1] = buffa[2];
        buffa[2] = next;
        result = posizioneZ(z - 1);
    }

    return result;
}

int main() {
    int Result;
    int Z;

    printf("Please, provide me a number and I give you the number positioned there in the BUFFA sequence:\n");

    do {
        scanf("%d", &Z);
    } while (Z <= 0);

    Result = posizioneZ(Z);

    printf("%d", Result);
}
