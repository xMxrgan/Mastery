/*
Write a program that takes froma file all the words in a dynamic list, count which are the most used words and print on another file all the word in order of usage, decide if you want them in order of frequency or alphabetical
Put a control that the words have to be at least of 4 letter
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char *word;
//    int times;
    struct node *next;
} elem;

elem *createList(elem *, char *);
void write(elem *);
//int counter(char *);
//elem *alphabetOrder(elem *);
//elem *freqOrder(elem *);

int main() {
    FILE *File;
    char *String;
    elem *List = NULL;
//    int Count;
//

    if (File == NULL) {
        printf("Error!");
    } else {

        File = fopen("CounterRead.txt", "r");

        while (!feof(File)) {

            fscanf(File, "%s ", String);
            String = (char *)malloc(sizeof(char));
            List = createList(List, String);
        }
        write(List);
    }

    fclose (File);
    free(String);
}

elem *createList(elem *list, char *string) {
    elem *tmp;
    elem *prec;

    tmp = (elem *)malloc(sizeof(elem));

    if (tmp != NULL) {
        tmp -> word = string;
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

void write(elem *list) {
    FILE  *fileW;
    elem *tmp = list;

    fileW = fopen("CounterWrite.txt", "w");

    while (tmp != NULL) {
        printf("%s\t\n", tmp -> word);
        tmp = tmp -> next;
    }

    fclose(fileW);
}
