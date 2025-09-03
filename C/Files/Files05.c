/*
Scrivere un programma C che conta i valori compresi in un intervallo [a, b] (a e b inseriti da tastiera) presenti in file di testo, utilizzando le funzioni fscanf() e feof().
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

