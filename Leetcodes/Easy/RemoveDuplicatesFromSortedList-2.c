#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int datum;
    struct node *next;
} elem;

elem *createList(elem *, int);
elem *deleteDuplicates(elem *);
void view(elem *);

int main() {
    elem *List = NULL;
    int Num;

    scanf("%d", &Num);
    while (Num > 0) {
        List = createList(List, Num);
        scanf("%d", &Num);
    }

    view(List);

    printf("Without duplicates:\n");

    List = deleteDuplicates(List);

    view(List);
}

elem *createList(elem *list, int num) {
    elem *prev;
    elem *tmp;

    tmp = (elem *)malloc(sizeof(elem));

    if (tmp != NULL) {
        tmp -> datum = num;
        tmp -> next = NULL;

        if (list != NULL) {
            for (prev = list; prev -> next != NULL; prev = prev -> next);
            prev -> next = tmp;
        } else {
            list = tmp;
        }
    } else {
        printf("Error!");
    }
    return list;
}

elem *deleteDuplicates(elem *list) {
    elem *tmp;
    elem *curr;
    elem *prev = NULL;
    elem *prox = curr -> next;
    elem *term;

    for (curr = list; curr != NULL; curr = curr -> next) {
        for (tmp = list -> next; tmp != NULL; tmp = tmp -> next) {

            if (curr -> datum == tmp -> datum) {
                prev = curr;
                curr = prox;
                prev -> next = prox;


            }
        }
    }


    return list;
}

void view(elem *list) {

    while (list != NULL) {
        printf("%d ", list -> datum);
        list = list -> next;
    }
    printf("\n");
}
