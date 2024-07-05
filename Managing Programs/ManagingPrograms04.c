/*
Esercizio 1 [11 punti] File ESA 18062020 B 1.c
Completare tutte le funzioni dichiarate ma non definite nel programma ESA_18062020 B 1.c per la
gestione di una lista concatenata di numeri interi, es.
3 -> 6 -> 10 -> 2 -> 8
In particolare:
 la funzione left rotate() modifica la lista, effettuando una rotazione a sinistra (LEFT) per cui il
primo valore viene posto in fondo alla lista. La lista dell’esempio diventa:
6 -> 10 -> 2 -> 8 -> 3
 la funzione right rotate() modifica la lista, effettuando una rotazione a destra (RIGHT) per cui
l’ultimo valore della lista viene messo davanti a tutti gli altri. La lista dell’esempio diventa:
8 -> 3 -> 6 -> 10 -> 2
Se la lista è vuota o contiene un solo elemento, i sottoprogrammi precedenti non modificano la lista
ricevuta in ingresso.
La funzione main() produce il seguente output:
3
3 -> 6 -> 10 -> 2 -> 8
6 -> 10 -> 2 -> 8 -> 3
3 -> 6 -> 10 -> 2 -> 8
8 -> 3 -> 6 -> 10 -> 2
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int datum;
    struct node *next;
} elem;

elem *createList(elem *, int);
void printList(elem *);
//void destroy(elem *);
// elem *leftRotate(elem *);
// elem *rightRotate(elem *);

int main() {
    elem *List = NULL;
    int Datum;

    printf("Give me a sequence of positive numbers for the list, negative for stopping the scan:\n");

    do {
        scanf("%d", &Datum);
        List = createList(List, Datum);
    } while (Datum > 0);

    printList(List);
}

elem *createList(elem *list, int datum) {
    elem *tmp;
    elem *prec;

    tmp = (elem *)malloc(sizeof(elem));

    if (tmp != NULL) {
        tmp -> datum = datum;
        tmp -> next = NULL;

        if (list == NULL) {
            list = tmp;

        } else {

            for (prec = list; prec -> next != NULL; prec = prec -> next) {
                prec -> next = tmp;
            }
        }

    } else {
        printf("Error!");
    }

    free(tmp);

    return list;
}

void printList(elem *list) {

    printf("Your original list is:\n");
    while (list != NULL) {
        printf("%d ", list -> datum);
        list = list -> next;
    }
}
