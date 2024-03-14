#include <stdio.h>
int sommaprod (int, int, int *);

int main () {
    int a, b, prod;
    int somma;

    scanf("%d %d", &a, &b);

    // somma = a + b;  Sottoprogrmma

    somma = sommaprod (a, b, &prod);
    printf("\n %d %d\n", somma);

    return 0;
}

int sommaprod (int x, int y, int *p) {

    *p = x * y;
    return (x + y);
}