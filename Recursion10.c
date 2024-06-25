/*
Si scriva un programma C che definisce le funzioni:
 leggi(), che legge da tastiera un numero intero non negativo e lo restituisce. Se fosse negativo, deve continuare a chiederlo all'utente;
 stampa(int numero), che stampa le cifre del numero indicato, in italiano. Per esempio, se numero e 4301 allora deve stampare quattro tre zero uno; se numero e 0 allora deve stampare zero.
 È possibile denire ulteriori funzioni ausiliarie, se servono. La funzione stampa() deve essere ricorsiva o chiamare una vostra funzione ricorsiva.
 Caso base: numero = 0;
 Passo ricorsivo: stampa( numero/10 );
 Infine, tale programma deve avere anche un main()che
chiama leggi()per leggere un numero non negativo e poi
chiama stampa()per stamparne le cifre in italiano.
*/

#include <stdio.h>
#include <stdlib.h>

int leggi() {
    int num;
    do {
        scanf("%d", &num);
    } while (num < 0);

    return num;
}

void stampa(int num) {
    int joker = num % 10;

    if(num / 10 > 0)
        stampa(num / 10);

    switch (joker) {
        case 0: printf("Zero"); break;
        case 1: printf("Uno"); break;
        case 2: printf("Due"); break;
        case 3: printf("Tre"); break;
        case 4: printf("Quattro"); break;
        case 5: printf("Cinque"); break;
        case 6: printf("Sei"); break;
        case 7: printf("Sette"); break;
        case 8: printf("Otto"); break;
        case 9: printf("Nove"); break;
        default: break;
    }
        printf(" ");
}

int main() {
    int Num = leggi();
    stampa(Num);
}
