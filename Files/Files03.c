/*
Scrivere un programma C che chiede all’utente una sequenza di numeri a priori illimitata e che termina con l’inserimento del numero 0 – non fa parte della sequenza. Il programma deve salvare i numeri (0 escluso) in un file di nome valori.txt e come ultimo valore deve scrivere nel file quanti numeri sono stati salvati. Ad esempio se l’utente inserisce 5 2 4 0 nel file nel file valori.txt troveremo 5 2 4 3.
*/

#include <stdio.h>

int main() {
    FILE *File;
    int Num, Count = 0;

    File = fopen("valori.txt", "w");

    do {
        scanf("%d", &Num);
        fprintf(File, "%d ", Num);

        Count ++;
    } while (Num != 0);

    fprintf(File, "\t%d", Count);


    fclose(File);
}
