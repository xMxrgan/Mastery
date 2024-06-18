/*
Scrivere una funzione ricorsiva che calcola il
resto della divisione tra due interi positivi
(avendo a disposizione solo somme e sottrazioni).
*/

#include <stdio.h>

int resto(int, int);

int main() {
    int Num1, Num2;
        int Max, Min;
    int Result;

    printf("Please, give me the first number.\n");
    scanf("%d", &Num1);

    printf("Please, give me the second number.\n");
    scanf("%d", &Num2);

    if (Num1 > Num2) {
        Max = Num1;
        Min = Num2;
    } else {
        Max = Num2;
        Min = Num1;
    }

    Result = resto(Max, Min);

    printf("%d", Result);
}

int resto (int max, int min) {
    int result;

    if (max - min < 0) {
        return min;
    } else {
        result = 1 + resto(max - min, min);
    }
    return result;
}
