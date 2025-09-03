#include <stdio.h>
#include <stdlib.h>

typedef struct node {
int Datum;
struct node *Next;
} elem;

elem *insertTail(elem *, int);
elem *insertHead(elem *, int);
elem *removeFrom(elem *, int);
elem *insertIn(elem *, int);                // Without conditions let's say insert before the fist number major: es 5,      2 -> 3 -> 5 -> 7
elem *unionOfTwo(elem*, elem *);            // Missing a condition let's say in order from the minor to the major (not creating a new one but implementing)
void massimoLista(elem *);
void view(elem *);
void destroy(elem *);

int main() {
    elem *ListTail = NULL;
    elem *ListHead = NULL;
    elem *List = NULL;
    int Num;

    printf("Please, give me your numbers:\n");
    scanf("%d", &Num);
    while (Num > 0) {
        ListTail = insertTail(ListTail,  Num);
        ListHead = insertHead(ListHead, Num);
        scanf("%d", &Num);
    }

    view(ListTail);
    view(ListHead);

    printf("Please, give me the number you want me to remove:\n");
    scanf("%d", &Num);
    ListTail = removeFrom(ListTail, Num);
    ListHead = removeFrom(ListHead, Num);

    view(ListTail);
    view(ListHead);

    printf("Please, give me the number you want me to insert:\n");
    scanf("%d", &Num);
    ListTail = insertIn(ListTail, Num);
    ListHead = insertIn(ListHead, Num);

    view(ListTail);
    view(ListHead);

    massimoLista(ListTail);
    massimoLista(ListHead);

    destroy(ListTail);
    destroy(ListHead);

}

elem *insertTail(elem *list, int num) {
    elem *tmp;
    elem *prec;

    tmp = (elem *)malloc(sizeof(elem));

    if (tmp != NULL) {
        tmp -> Datum = num;
        tmp -> Next = NULL;

        if (list != NULL) {
            for (prec = list; prec -> Next != NULL; prec = prec -> Next);
            prec -> Next = tmp;
        } else {
            list = tmp;
        }

    } else {
        printf("Error!");
    }

    return list;
}

elem *insertHead(elem *list, int num) {
    elem *tmp;

    tmp = (elem *)malloc(sizeof(elem));

    if (tmp != NULL) {
        tmp -> Datum = num;
        tmp -> Next = list;
        list = tmp;

    } else {
        printf("Error!");
    }

    return list;
}

void view(elem *list) {

    while (list != NULL) {
        if (list -> Next != NULL) {
            printf("%d -> ", list -> Datum);
        } else {
            printf("%d\n", list -> Datum);
        }

        list = list -> Next;
    }
}

void destroy(elem *list) {
    elem *term;

    while (list != NULL) {
        term = list;
        list = list -> Next;
        free(term);
    }
}

elem *removeFrom(elem *list, int num) {
    elem *prec = NULL;
    elem *curr = list;
    elem *term;

    while (curr) {

        if (curr -> Datum == num) {

            if (prec) {
                term = curr;
                prec -> Next = curr -> Next;
                curr = curr -> Next;
                free(term);
            } else {
                term = curr;
                curr = curr -> Next;
                free(term);
            }

        } else {
            prec = curr;
            curr = curr -> Next;
        }
    }

    return list;
}

elem *insertIn(elem *list, int num) {
    elem *prec = NULL;
    elem *curr = list;
    elem *newNum;
    int flag = 0;

    newNum = (elem *)malloc(sizeof(elem));

    newNum -> Datum = num;

    while (curr && !flag) {

        if (num < curr -> Datum) {
            flag ++;

            if (prec) {
                prec -> Next = newNum;
                newNum -> Next = curr;
                curr = curr -> Next;
            } else {
                newNum -> Next = curr;
                prec = newNum;
                list = newNum;
            }
        } else {
            prec = curr;
            curr = curr -> Next;
        }
    }

    return list;
}

void massimoLista(elem *list) {
    int max = - 1;

    while (list) {
        if (list -> Datum >= max) {
            max = list -> Datum;
        }

        list = list -> Next;
    }

    printf("The max number is %d.\n", max);
}
