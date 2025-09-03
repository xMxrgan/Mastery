#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} elem;

elem *insertHead(elem *, int);
void view(elem *);
void maximum(elem *, int *, int *);                    // Passed through pointer

int main() {

    elem *List = NULL;
    int Num;
    int Max, Min;
    int Result;

    scanf("%d", &Num);

    while(Num < 0){

        List = insertHead(elem *List, int Num);
        view(elem *List);
        scanf("%d", &Num);
    }


elem *insertHead(elem *List, int num) {
    elem *tmp;

    tmp = (elem *)malloc(sizeof(elem));

    if (tmp == NULL) {
        

    
    
}

    
