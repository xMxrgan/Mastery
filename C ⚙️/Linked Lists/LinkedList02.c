/*
Si consideri una lista dinamica di interi, i cui elementi sono del tipo definito come di seguito riportato:
typedef struct El { int dato1; int dato2;
struct El *next; } ELEMENTO;
Si codifichi in C le funzioni contamultipli e multiplo. La funzione contamultipli riceve come parametro la testa della lista e restituisce il numero di elementi della lista che hanno il primo valore numerico (dato1) multiplo del secondo (dato2). Se la lista è vuota, la funzione restituisce il valore -1.
Per verificare se un valore intero è multiplo di un altro la funzione deve richiamare la funzione ricorsiva multiplo definita dallo studente.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data1;
    int data2;
    struct node *next;
} elem;

elem *inserisciTesta(elem *, int, int);
int contamultipli(elem *);
int multiplo(elem *);
void visualizza(elem *);
void distruggi(elem *);

int main() {
    int Dato1, Dato2;
    int Result;
    elem *Lista = NULL;

    scanf("%d", &Dato1);
    scanf("%d", &Dato2);

    while (Dato1 > 0 && Dato2 > 0) {

        Lista = inserisciTesta(Lista, Dato1, Dato2);

        scanf("%d", &Dato1);
        scanf("%d", &Dato2);
    }

    visualizza(Lista);

    Result = contamultipli(Lista);

    printf("%d dei tuoi elementi hanno il primo dato multiplo del secondo.", Result);
}

elem *inserisciTesta(elem *lista, int dato1, int dato2) {
    elem *tmp;

    tmp = (elem *)malloc(sizeof(elem));

    if (tmp != NULL) {
        tmp -> data1 = dato1;
        tmp -> data2 = dato2;
        tmp -> next = lista;
        lista = tmp;

    } else {
        printf("Error!");
    }

    return lista;
}

void visualizza(elem *lista) {

    while (lista != NULL) {
        printf("%d\t%d\n", lista -> data1, lista -> data2);
        lista = lista -> next;
    }
}

int contamultipli(elem *lista) {
    int count = 0;

    while (lista != NULL) {
        if (multiplo(lista)) {
            count ++;
        }

        lista = lista -> next;
    }

    return count;
}

int multiplo(elem *lista) {

    if (lista -> data1 % lista -> data2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
