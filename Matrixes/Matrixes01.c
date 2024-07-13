/*
Si scriva un programma che copi tutti i valori di
una matrice int M[D1][D2] in un array (// Io agggiungo dinamico) di
dimensione D1*D2 eliminando nel processo di
copia tutti i duplicati negativi.
*/

#include <stdio.h>
#include <stdlib.h>
#define D1 5
#define D2 4

typedef struct node {
    struct node *next;
    int datum;
} elem;

elem *createList(elem *, int);

int main() {
    int Matrix[D1][D2];
    
}

elem *createList(elem *list, int num) {
    elem *tmp;
    elem *prec;
    
    tmp = (elem *)malloc(sizeof(elem));
    
    if (tmp != NULL) {
        tmp -> datum = num;
        tmp -> next = NULL;
        
        if (list != NULL) {
            for (prec = list; prec != NULL; prec = prec -> next);
            prec -> next = tmp;
        } else {
            list = tmp;
        
    } else {
        printf("Error!");
    }
    
    return list;
}
