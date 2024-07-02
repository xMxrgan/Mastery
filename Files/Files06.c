/*
Si scriva un programma C opportunamente scomposto in funzioni e procedure che permetta all’utente di inizializzare una matrice di interi di dimensione NxN (con N dato) con numeri positivi presi dal file «input.txt». Supponendo che il file contenga un numero sufficiente di valori positivi.
Dopo aver stampato la matrice a video, il programma deve trovare il minimo di tutti i valori inseriti nella matrice e stampare in un file di nome “risultato.txt” tale valore.
*/

#include <stdio.h>
#define N 3

int readAndPrint();
void writeOnFile(int);

int main() {
    int Min = readAndPrint();
    writeOnFile(Min);
}

int readAndPrint() {
    FILE *FileRead;
    int num[N], min = 100;
    int joker, jolly;

    FileRead = fopen("input.txt", "r");

    if (FileRead != NULL) {                 // Problema

        while(!feof(FileRead)) {

            for (joker = 0; joker < N; joker ++) {
                for (jolly = 0; jolly < N; jolly ++) {

                    fscanf(FileRead, "%d", &num[jolly]);
                    printf("%d ", num[jolly]);

                    if (num[jolly] <= min) {
                        min = num[jolly];
                    }
                }
            printf("\n");
            }
        }

    } else {
        printf("Error!");
    }

    fclose(FileRead);

    return min;
}

void writeOnFile(int min) {
    FILE *FileWrite;

    FileWrite = fopen("risultato.txt", "w");

    fprintf(FileWrite, "%d", min);

    fclose(FileWrite);
}
