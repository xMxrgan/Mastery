/*
Si comple* il file (skeleton) ESI_20062018_A_1.c di modo che:
¢ la funzione crea_lista riceve in input una stringa, converte la stringa in una lista di caraGeri e res*tuisce il puntatore alla testa della lista. La struGura struct node_t deve essere u*lizzata come definizione dei nodi della lista.
¢ la funzione stampa_lista stampa la lista in input.
¢ la funzione raddoppia_vocali riceve in input una lista (il puntatore al
primo nodo) e raddoppia i nodi della lista che contengono delle vocali.
L’output del programma é il seguente:
la mia stringa
laa miiaa striingaa
NOTA: Lo studente NON deve ges*re la deallocazione della lista.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
    char *data;
    struct node *next;
} elem;

elem *inserisciCoda(elem *lista, int *carattere) {
    elem *tmp;
    elem *prec;

    tmp = (elem *)malloc(sizeof(elem));

    if (tmp != NULL) {
        tmp -> data = *carattere;
        tmp -> next = NULL;

        if (lista == NULL) {
            lista = tmp;
        } else {
            for (prec = lista; prec != NULL; prec = prec -> next) {
                prec -> next = tmp;
            }
        }
    }

    return lista;
}

void visualizza(elem *lista) {

    while (lista != NULL) {
        printf("%s", lista -> data);
        lista = lista -> next;
    }
}

char *raddoppiaVocali(char *string) {
    int j;

    for (j = 0; j != '\0'; j ++) {
        if (string[j] == 'a' ||)
    }

}
