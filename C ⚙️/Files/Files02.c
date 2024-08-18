/*
Scrivere un programma C che si comporta come il programma dell’esercizio 1, ma legge una stringa alla volta con la funzione (con fscanf %s) dal file prima di stamparla a video.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    char *String;
    FILE *file;

    String = (char *)malloc(sizeof(char));

    file = fopen("input1.txt", "r");

    if (file == NULL) {

        printf("Error!");

    } else {

        while (!feof(file)) {

            fscanf(file, "%s", String);
            printf("%s ", String);

        }
    }

    fclose(file);
}
