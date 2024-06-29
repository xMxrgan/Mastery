/*
Si modifichi il file ESA 15062017 B 1.c tale che:
 la funzione leggi legga da tastiera una stringa lunga al più 256 caratteri
 la funzione crea_lista crei una lista di caratteri a partire da una stringa s escludendo i caratteri numerici. Tale funzione deve essere ricorsiva.
 la funzione stampa stampi la lista di caratteri in input ponendo una freccietta tra gli elementi della lista (si veda esempio di seguito).
 Un esempio di esecuzione del main già implementato nel file è:
Inserire una stringa: c0a09se3t367t8a Creazione della lista...
La lista è: c -> a -> s -> e -> t -> t -> a
*/

// Done without opening a file, just asking to the user the input

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
elem *createList(elem *, char*);

int main() {
    char *String;
    int Joker;
    elem *List = NULL;

    String = read();

    List = createList(List, String);

    printf("Prova2");
    printList(List);

}

char *read() {
    char *string;

    string = (char *)malloc(sizeof(char));

    printf("Give me your string!\nBut it has to be shorter than 256 characters.\n");
    scanf("%s", string);

    while (strlen(string) > DIM) {
        printf("It has to be shorter than 256 characters.\n");
        scanf("%s", string);
    }

    return string;
}

elem *createList(elem *list, char *string) {
    elem *tmp;
    elem *prec;

    if (*string == '\0') {

        return 0;

    } else {

        if (*string >= '0' && *string <= '9') {

            return createList(list, string ++);

        } else {

            tmp = (elem *)malloc(sizeof(elem));

            if (tmp != NULL) {

                tmp -> data = *string;
                tmp -> next = NULL;

                if (list == NULL) {

                    list = tmp;

                } else {

                    for (prec = list; prec -> next != NULL; prec = prec -> next) {

                        prec -> next = tmp;
                    }
                }
            }
        }
    }

    return list;
}

void printList(elem *list) {

    while (list != NULL) {

        printf(" %c", list->data);

        if (list->next != NULL) {

            printf(" ->");
        }

        list = list->next;
    }
}
