/*
Scrivere un programma C che chiede all’utente una sequenza di numeri a priori illimitata e che termina con l’inserimento del numero 0 – non fa parte della sequenza. Il programma deve salvare i numeri (0 escluso) in un file di nome valori.txt e come ultimo valore deve scrivere nel file quanti numeri sono stati salvati. Ad esempio se l’utente inserisce 5 2 4 0 nel file nel file valori.txt troveremo 5 2 4 3.
*/

#include <stdio.h>

int main() {
    int Count = -1;
    int NumFile, Num1, Num2;
    FILE *file;

    printf("Please, give me 2 values and I return you how many numbers there are between them in a file");
    scanf("%d %d", &Num1, &Num2);

    file = fopen("text.txt", "r");

    if (file != NULL) {

        while (!feof(file)) {

            fscanf(file, "%d", &NumFile);

            if (NumFile == Num1 || NumFile == Num2) {
                Count = 0;
            }

            if (NumFile == Num1 || NumFile == Num2 && Count >= 0) {
                Count ++;
            }
        }
    } else {
        printf("Error!");
    }

    if (Count > 0) {
        printf("%d", Count);
    } else {
        printf("One or both your number aren't included in the file");
    }

    fclose(file);
}

