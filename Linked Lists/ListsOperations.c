#include <stdio.h>
#include <stdlib.h>

typedef struct node {
int Datum;
struct node *Next;
} elem;

elem *insertTail(elem *, int);
elem *insertHead(elem *, int);
elem *remove(elem *, int);
void view(elem *);
void destroy(elem *);

int main() {
    
}
