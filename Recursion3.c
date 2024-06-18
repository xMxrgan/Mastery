/*
Scrivere una funzione ricorsiva che stabilisce se due
numeri interi x e y sono primi tra loro (ossia non
hanno divisori comuni >1). La funzione deve
restituire 1(vero) o 0 (falso). Attenzione: esistono 2
casi base (proprietà vera e proprietà falsa).
*/

#include <stdio.h>
int numeriprimi(int, int, int);

int main() {
   int Num1, Num2;
   int Count = 2;
   int Result;

    printf("Give me the first number.\n");
    scanf("%d", &Num1);

    printf("Give me the second number.\n");
    scanf("%d", &Num2);

    Result = numeriprimi(Num1, Num2, Count);
    printf("%d", Result);
}

int numeriprimi(int num1, int num2, int count) {

    if (count > num1 || count > num2) {
        return 1; // NON hanno divisori comuni

    } else if (num1 % count == 0 && num2 % count == 0) {
    return 0; // Hanno almeno 1 divisore conune

   } else {
    result = numeriprimi(num1, num2, count ++);
   }

}
