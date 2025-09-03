#include <stdio.h>

typedef struct node {
    char data;
    struct node *next;
} elem;

elem *insertTail(elem *, char);
int maxData(elem *);
void viewList(elem *);

int main() {
    elem *Lista = NULL;
    
}