/*
Si modifichi il file ESA 15062017 B 1.c tale che:
 la funzione leggi legga da tastiera una stringa lunga al più 256 caratteri
 la funzione crea_lista crei una lista di caratteri a partire da una stringa s escludendo i caratteri numerici. Tale funzione deve essere ricorsiva.
 la funzione stampa stampi la lista di caratteri in input ponendo una freccietta tra gli elementi della lista (si veda esempio di seguito).
 Un esempio di esecuzione del main già implementato nel file è:
Inserire una stringa: c0a09se3t367t8a Creazione della lista...
La lista è: c -> a -> s -> e -> t -> t -> a
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 256

typedef struct node {
    char data;
    struct node *next;
} elem;

char *read();
void printList(elem *);
elem *createList(elem *, char);

int main() {
    char *String;
    int Joker;
    elem *List = NULL;

    String = read();

    for (Joker = 0; Joker != '\0'; Joker ++) {

        if (String[Joker] < '0' && String[Joker] > '9') {

            List = createList(List, String[Joker]);
            printList(List);
        }
    }
}

char *read() {
    char *string;

    printf("Give me your string!\nBut it has to be shorter than 256 characters.\n");
    scanf("%s", string);

    while (strlen(string) < DIM) {
        printf("It has to be shorter than 256 characters.\n");
        scanf("%s", string);
    }

    return string;
}

elem *createList(elem *list, char character) {
    elem *tmp;
    elem *prec;

    tmp = (elem *)malloc(sizeof(elem));

    if (tmp != NULL) {

        if (list == NULL) {
            tmp -> data = character;
            tmp -> next = NULL;
        } else {
            
            

            for (prec = list; prec != NULL; prec = prec -> next) {
                tmp = prec -> next;
            }
        }
    }


    return list;
}

void printList(elem *list) {

    printf("%c -> ", list -> data);

    while (list -> next != NULL) {

        list = list -> next;
        printf("%d", list -> data);

    }
}
