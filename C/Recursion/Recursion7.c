/*
Scrivere una funzione ricorsiva potenza(int base,
int esp) che riceve due parametri e calcola
l’elevamento a potenza (nel caso di esponente
positivo).
*/
#include <stdio.h>

int power(int base, int esp) {
    int result;

    if (esp == 1) {
        result = base;
    } else {
        result = base * power(base, esp - 1);
    }

    return result;
}

int main() {
    int Base, Esp;
    int Result;

    printf("Please give me base of the power operation:\n");
    scanf("%d", &Base);

    printf("And the exponent:\n");

    do {
        scanf("%d", &Esp);
    } while (Esp < 0);

    Result = power(Base, Esp);

    printf("%d", Result);
}
