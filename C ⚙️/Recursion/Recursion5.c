/*
Scrivere una funzione ricorsiva che calcola il
resto della divisione tra due interi positivi
(avendo a disposizione solo somme e sottrazioni).
*/

#include <stdio.h>

int resto(int, int);

int main() {
    int Num1, Num2;
    int Result;

    printf("Please, give me the first number.\n");
    scanf("%d", &Num1);

    printf("Please, give me the second number.\n");
    scanf("%d", &Num2);

    Result = resto(Num1, Num2);

    printf("%d", Result);
}

int resto (int num1, int num2) {
    int result;

    if (num1 < num2) {
        return num1;
    } else {
        result = resto(num1 - num2, num2);
    }
    return result;
}
