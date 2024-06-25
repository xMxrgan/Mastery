/*
Si scriva un programma C che definisce la funzione ricorsiva int cifra_massima(int num) la quale deve restituire la cifra massima nella rappresentazione decimale di num. Tale
programma dovrà inoltre definire un main che
(1) chiede all’utente di inserire un numero non negativo,
(2) chiama la funzione cifra massima per calcolarne la
cifra massima e
(3) stampa tale cifra massima trovata.
Esempi
$ ./a.out Inserisci un numero non negativo: 1232
La cifra massima di 1232 è 3
$ ./a.out Inserisci un numero non negativo: 0
La cifra massima di 0 è 0
$ ./a.out Inserisci un numero non negativo: -5
Inserisci un numero non negativo: 30756
La cifra massima di 30756 è 7
*/

#include<stdio.h>

int cifraMax(int);
void stampa(int);

int main() {
    int Result;
    int Num;
    
    do {
        scanf("%d", &Num);
    } while (Num < 0);
    
    Result = cifraMax(Num);
    stampa(Result);
}

int cifraMax(int num) {
    int max = num % 10;
    int result;

    if (num / 10 > 0) {
        result = max;
    } else {
        result = cifraMax(num / 10);
    }

    return result;
}

void stampa(int result) {
    printf("The major number is: %d", result);
}
