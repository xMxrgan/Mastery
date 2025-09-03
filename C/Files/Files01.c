/*
Scrivere un programma C che apre in lettura un file di nome input1.txt - creato precedentemente (vedi il file fornito) – e ne mostra il contenuto a video. Non sapendo cosa contiene il file leggete un carattere alla volta (con fscanf %c).
*/

#include <stdio.h>

int main() {

    char Datum;
    FILE *file;

    file = fopen("input1.txt", "r");

    if (file == NULL) {

        printf("Error!");

    } else {

        while (!feof(file)) {

            fscanf(file, "%c", &Datum);
            printf("%c", Datum);
        }
    }

    fclose(file);
}
