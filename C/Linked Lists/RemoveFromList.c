#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int datum;
    struct node *next;
} elem;

elem *createList(elem *, int);
elem *removeFrom(elem *, int);
void view(elem *);

int main() {
    elem *List = NULL;
    int Num;


    printf("Please, give me your list:\n");
    scanf("%d", &Num);
    while(Num != -1) {
        List = createList(List, Num);
        scanf("%d", &Num);
    }

    printf("Your list is: ");
    view(List);

    printf("Please, give me the number you want to remove:\n");
    scanf("%d", &Num);

    List = removeFrom(List, Num);

    view(List);
}

elem *createList(elem *list, int num) {
    elem *prec;
    elem *tmp;

    tmp = (elem *)malloc(sizeof(elem));

    if (tmp != NULL) {
        tmp -> datum = num;
        tmp -> next = NULL;

        if (list == NULL) {
            list = tmp;
        } else {
            for (prec = list; prec -> next != NULL; prec = prec -> next);
            prec -> next = tmp;
        }

    } else {
        printf("Error!");
    }

    return list;
}

void view(elem *list) {
    while (list != NULL) {
        if (list -> next != NULL) {
            printf("%d -> ", list -> datum);
        } else {
            printf("%d\n", list -> datum);
        }
        list = list -> next;
    }
}

elem *removeFrom(elem *list, int num) {
    elem *prec = NULL;
    elem *curr = list;
    elem *tmp;

    while (curr != NULL) {

        if (curr -> datum == num) {

            if (prec == NULL) {
                tmp = curr;
                curr = curr -> next;
                free(tmp);

            } else {
                tmp = curr;
                prec -> next = curr -> next;
                curr = curr -> next;
                free(tmp);
            }

        } else {
            prec = curr;
            curr = curr -> next;
        }
    }

    return list;
}
