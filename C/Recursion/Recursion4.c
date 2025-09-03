/*
Si scriva un programma C che calcoli il quoziente della divisione tra interi x e y usando una funzione ricorsiva.
 Caso base: x < y, allora il quoziente è zero.
 Passo ricorsivo: il quozionte è 1 + il quoziente della divisione di (x-y) per y.
Il programma dovrà contenere anche una funzione leggi() richiede all’utente un intero non negativo (controllare l’input). Tale funzione sarà chiamata due volte all’interno della funzione main() per inizializzare x e y.
*/

#include <stdio.h>

int leggi(int);
int quoziente(int);

int main() {
    int X = leggi(X);
    int Y = leggi(Y);


}

int leggi(int x){
    scanf("%d", &x);
    return x;
}

int leggi(int y){
    scanf("%d", &y);
    return y;
}
