#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} elem;

elem *CreateList(elem *list, int num) {
    elem *tmp = NULL;

    tmp = (elem *)malloc(sizeof(elem));

    if (tmp) {
        tmp -> data = num;
        tmp -> next = NULL;

        if (list) {
            tmp -> next = list;
            list = tmp;

        } else {
            list = tmp;
        }

    } else {
        printf("Error!");
    }

    return list;
}

void viewList(elem *list) {
    while (list) {
        if (list -> next) printf("%d -> ", list -> data);
        if (!list -> next) printf ("%d\n");
        
        list = list -> next;
    }
}

int main() {
    elem *List = NULL;
    int Num;

    scanf("%d", &Num);
    while (Num) {
        List = CreateList(List, Num);
        scanf("%d", &Num);
    }


}
