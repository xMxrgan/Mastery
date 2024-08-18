/*
Completare il programma list.c rispettando le specifiche fornite nei commenti del codice stesso. In particolare è richiesto di implementare:
¢ 1) int is_empty(struct list *L) – la funzione deve restituire 1 se e solo se L è vuota, 0 altrimenti;
¢ 2) void list_print(struct list *L) – la funzione deve stampare a video il contenuto della lista L (tenere presente che L può anche essere la lista vuota, ossia valere NULL);
¢ 3) struct list *list_search(struct list *L, int k) – la funzione deve restituire un puntatore ad un nodo della lista L in cui il campo val contenga il valore k; se il valore k non compare nella lista, la funzione deve restituire NULL;
¢ 4) struct list *nth_element(struct list *L, int n) – la funzione deve restituire il puntatore all’n-esimo nodo della lista (n=0 è il primo nodo, n=1 è il secondo nodo, ecc.). Se la lista ha meno di n+1 nodi, deve restituire NULL;
¢ 5) struct list *list_from_array(int v[], int n) – la funzione deve creare una nuova lista contenente gli n elementi dell’array v;

¢ 6) struct list *list_concat(struct list *L1, struct list *L2) – la funzione deve restituire una lista contenente i nodi di L1 seguiti da quelli di L2. N.B., la funzione non deve creare nuovi nodi, ma utilizzare quelli già presenti nelle due liste, “aggiustando” eventualmente alcuni puntatori. Come per altre delle funzioni precedenti, è possibile una semplice implementazione ricorsiva (vedi lucidi).
¢ 7) struct list *list_reverse(struct list *L) – la funzione deve restituire la lista ottenuta “rovesciando” i nodi di L (l’ultimo nodo di L diventa il primo della nuova lista; il penultimo diventa il secondo, e così via). Questa funzione non deve creare nuovi nodi, deve semplicemente riorganizzare quelli di L. Per questa funzione conviene probabilmente un approccio iterativo (non ricorsivo), in cui si esegue un ciclo il cui corpo consiste nello spostamento del primo nodo di L all'inizio della lista rovesciata. Il ciclo termina quando L diventa la lista vuota...
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
} elem;
elem *insertTail(elem *L, int num) {
    elem *tmp;
    elem *prec;

    tmp = (elem *)malloc(sizeof(elem));

    if (tmp != NULL) {

        tmp -> next = NULL;
        tmp -> data = num;

        if (L == NULL) {

            L = tmp;

        } else {

            for (prec = L; prec != NULL; prec = prec -> next) {

                prec -> next = tmp;

            }

        }

    } else {

        printf("Error!");

    }

    return L;
}
int is_empty(elem *L) {
    if (L == NULL) {
        return 1;
    } else {
        return 0;
    }
}
void list_print(elem *L) {

    if (L == NULL) {
        printf(NULL);                       // Or "NULL"?
    } else {

        while (L != NULL) {
            printf("%d ", L -> data);
            L = L -> next;
        }
    }

}
elem *list_search(elem *L, int k) {

    int flag = 0;

    while (L != NULL) {

        if (L -> data == k) {
            return L;
        } else {
            L = L -> next;
        }

    }

    return NULL;                            // Can I?
}
elem *nth_element(elem *L, int n) {

    while (n != 0) {

        if (L != NULL) {
            n --;                           // Is a counter towards zero
            L = L -> next;
        } else {
            return NULL;
        }

    }

    return L;
}
elem *list_from_array() {
    elem *listArray = NULL;
    elem *tmp;

}

elem *list_concat() {

}

elem *list_reverse() {

}

int main() {
    elem *List;
    int V[];
    int K;                                  // Number to look for
    int N;                                  // Specific node to return
    int Num;

    scanf("%d", &Num);

    while(Num > 0) {

        List = insertTail(List, Num);
        list_print(List);
        scanf("%d", &Num);

    }


}
