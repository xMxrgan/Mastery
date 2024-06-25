/*
Scrivere una funzione ricorsiva che calcola la somma
di tutti i naturali compresi tra 0 e x (x viene letto da
tastiera nel main, deve essere positivo, e viene
passato come parametro alla funzione).
*/

#include <stdio.h>

int somma(int);
int main(){
    int Num;
    int Result;

    do {
        scanf("%d", &Num);
    } while (Num <= 0);

    if (Num > 0) {
        Result = somma(Num);
    }
}

int somma(int num) {
    int result;
    int count = 1;


    if (num > 1) {
        count ++;
        result = somma(num - 1);
    } else {
        return count;
    }
}
