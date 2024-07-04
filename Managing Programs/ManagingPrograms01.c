/*
Diciamo che un array a[] è "quasi ordinato" se tutti i valori negativi (se esistono) precedono i valori maggiori o uguali di zero (se esistono); si noti che i valori negativi possono comparire in ordine qualsiasi, come pure i valori maggiori o uguali di zero. Ad esempio l'array a[] = {-1, -7, 8, 10, 8, 1} è quasi ordinato, come pure l'array a[] = {-9, -7, -1, -3} e a[] = {13, 9, 0, 21, 33}, mentre l'array a[] = {3, -1, 4, 5} (compare un valore >= 0 prima di uno negativo). Scrivere la funzione int quasi_ordinato(int a[], int n) che, dato in input un array a[] non vuoto e la sua lunghezza n, ritorna 1 se e solo se a[] è quasi ordinato, 0 altrimenti.
*/

#include <stdio.h>
#include <stdlib.h>

/*
typedef struct node {
    int Datum;
    struct node *Next;
} elem;
*/

int quasi_ordinato(int [], int);
int main() {
    int A[] = {};                           // Come fare array??
    int Result, Joker, N;

    printf("Give me the lenght of the array:\n");
    scanf("%d", &N);

    for (Joker = 0; Joker <= N; Joker ++) {
        scanf("%d", &A[Joker]);
    }

    Result = quasi_ordinato(A, N);

    printf("%d", Result);
}

int quasi_ordinato(int a[], int n) {
    int joker;
    int Flag = 0;                           // It becomes 1 whenever numbers turn positive

    for (joker = 0; joker <= n; joker ++) {

        if (a[joker] >= 0) {
            Flag = 1;
        }

        if (a[joker] < 0 && Flag == 1) {
            return 0;
        }
    }

    return 1;
}
