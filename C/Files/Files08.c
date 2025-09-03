/*
Scrivere un programma C che apre un file di testo “testo.txt” contenente parole ciascuna di al massimo 15 caratteri. Il programma identifica e stampa a video tutte le parole che rappresentano un numero (cioè composte soltanto da cifre). Ad esempio, se il file “input3.txt” contiene il testo:
oggi è il 30 marzo 2020 e per superare l’esame è necessario prendere almeno 18 nella prova1 di programmazione
Il programma stamperà a video:
30
2020
18
Variante: stampare le parole che contengono almeno 3 vocali minuscole (la scelta deriva dall'utente)
*/


#include <stdio.h>
#include <stdlib.h>
#define DIM 15

int main() {
    char *String;
    FILE *file;
    int Joker;                              // My companion that checks if strings have numbers (flag)

    String = (char *)malloc(sizeof(char));

    file = fopen("input3.txt", "r");

    if (file != NULL) {

        do {
            printf("Choose 'AllNumbers' (writing number '1') for receiving only words with numbersor or 'ThreeChars' (writing number '2') for having only words with at least 3 vocals lower case:\n");
            scanf("%d", &Joker);
        } while (Joker != 1 && Joker != 2);

        if (Joker == 1) {                       // AllNumbers

            while(!feof(file)) {
                Joker = 0;                      // Let's suppose that every string has just numbers

                fscanf(file, "%s", String);

                while (*String != '\0') {

                    if (*String < '0' || *String > '9' && Joker == 0) {
                        Joker = 1;
                    }
                }

                if (Joker == 0) {
                    printf("%s", String);
                }
            }
        }

        if (Joker == 2) {                       // ThreeChars

            while(!feof(file)) {
                Joker = 0;

                fscanf(file, "%s", String);

                while (*String != '\0') {

                    if (*String == 'a' || *String == 'e' || *String == 'i' || *String == 'o' || *String == 'u') {
                        Joker ++;
                    }
                }

                if (Joker >= 3) {
                    printf("%s", String);
                }
            }
        }

        fclose(file);
    }
}
