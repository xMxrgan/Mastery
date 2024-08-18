/*
Scrivere un programma C che crea il file di testo “tabellina.txt” con la tabellina pitagorica fino a un dato numero (per es. fino a 5). Utilizza il formato "%3d\t" per allineare i numeri a destra con almeno 3 spazi come dimensione minima.
*/

#include <stdio.h>

int main() {
    int Num, Joker, Jolly;
    FILE *file;

    file = fopen("tabellina.txt", "w");

    printf("Please, give me the cap for the multipliers:\n");
    scanf("%d", &Num);

    if (file != NULL) {
        for (Joker = 1; Joker <= Num; Joker ++) {
            for (Jolly = 1; Jolly <= 10; Jolly ++) {

                fprintf(file, "%3d\t", Jolly * Joker);
            }
            fprintf(file, "\n");
        }

    } else {
        printf("Error!");
    }

    fclose(file);
}
