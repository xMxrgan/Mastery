/*
Si scriva un programma che copi tutti i valori di una matrice int M[D1][D2] in un array (// Io agggiungo dinamico) di dimensione D1*D2 eliminando nel processo di copia tutti i duplicati negativi.
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
elem *cancDuplicates(elem *);
void view(elem *);

int main() {
    int Matrix[D1][D2];
    elem *List;
    int I, J;

    printf("Please, give me the numbers of the matrix:\n");
    for (I = 0; I < D1; I ++) {
        for (J = 0; J < D2; J ++) {
            scanf("%d", &Matrix[I][J]);
            List = createList(List, Matrix[I][J]);
            printf("%d\t", Matrix[I][J]);
        }
    }

    view(List);
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
        }

    } else {
        printf("Error!");
    }

    return list;
}

void view(elem *list) {

    while (list != NULL) {
        printf("%d", list -> datum);
        list = list -> next;
    }
}
