/*
Realizzare il sottoprogramma somme_prefisse che accetta come parametro un array di interi a[] di lunghezza N (e qualsiasi altro parametro ritenuto necessario); si garantisce che si avrà sempre N >= 1.
La funzione deve restituire un NUOVO array b[], sempre di lunghezza N, contenente le "somme prefisse" di a[].
Specificamente, per ogni j (j=0,…,N-1) i valori di b[j] si ottengono dalla somma degli elementi a[0] +…+ a[j].
Ad esempio, se a[] = {1,2,1,2,1}, si otterrà b[] = {1,3,4,6,7}.
Si scrivano inoltre il prototipo del sottoprogramma, la chiamata nel main, e la dichiarazione di tutte le variabili ritenute utili.
(Bonus di 1 punto per la definizione ricorsiva)
*/

#include <stdio.h>
#include <stdlib.h>

int *read(int);
int *somme_prefisse(int *, int);

int main() {
    int *Array;
    int *Brray;
    int N;
    int Joker;

    printf("Please, give me a dimensione for the list:\n");
    scanf("%d", &N);

    Array = read(N);

    Brray = somme_prefisse(Array, N);

    printf("Your original array:\n");
    for (Joker = 0; Joker < N; Joker ++) {
        printf("%d", Array[Joker]);
    }

    printf("\n");

    printf("Your prefixed array:\n");
    for (Joker = 0; Joker < N; Joker ++) {
        printf("%d", Brray[Joker]);
    }

    free(Array);
    free(Brray);
}

int *read(int n) {
    int joker;
    int *Array;

    Array = (int *)malloc(n *(sizeof(int)));

    for (joker = 0; joker < n; joker ++) {
        scanf("%d", &Array[joker]);
    }

    return Array;
}

int *somme_prefisse(int *Array, int n) {
    int *Beeray;
    int joker;

    Beeray = (int *)malloc(n *(sizeof(int)));

    Beeray[0] = Array[0];

    for (joker = 1; joker < n; joker ++) {

        Beeray[joker] = (Array[joker] + Beeray[joker - 1]);

    }

    return Beeray;
}
