/*
Write a program that takes froma file all the words in a dynamic list, count which are the most used words and print on another file all the word in order of usage, decide if you want them in order of frequency or alphabetical
Put a control that the words have to be at least of 4 letter
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char *word;
    int times;
    struct node *next;
} elem;

elem *createList(elem *, char *);
void write(elem *);
elem *freqOrder(elem *);

int main() {
    FILE *File;
    char *String;
    elem *List = NULL;

    String = (char *)malloc(sizeof(char));
    File = fopen("CounterRead.txt", "r");

    if (File == NULL) {
        printf("Error!");
    } else {

        while (!feof(File)) {

            fscanf(File, "%s ", String);
            List = createList(List, String);
        }
        write(List);
    }

    List = freqOrder(List);

    fclose (File);
    free(String);
}

elem *createList(elem *list, char *string) {
    elem *tmp;
    elem *prec;
    char *character;
    int counter = 1;

    tmp = (elem *)malloc(sizeof(elem));
    character = (char *)malloc(sizeof(char));

    strcpy(character, string);

    if (tmp != NULL) {
        tmp -> word = character;
        tmp -> times = counter;
        tmp -> next = NULL;

        if (list == NULL) {
            list = tmp;

        } else {

            for (prec = list; prec -> next != NULL; prec = prec -> next) {

                if (strcmp(prec -> word, character) == 0) {
                    prec -> times ++;

                    return list;
                }
            }
            prec -> next = tmp;
        }
        return list;

    } else {
        printf("Error!");
    }

    return list;
}

elem *freqOrder(elem *list) {
    elem *tmp;
    elem *prec;
    int max = -1;
    int count = 1;


    for (prec = list; prec != NULL; prec = prec -> next) {
        if (prec -> times > max) {
            max = prec -> times;
        }                                   // To find the max
    }

    while (count != max + 1) {

        for (prec = list; prec != NULL; prec = prec -> next) {
            if (prec -> times == count) {
                tmp = prec;
                tmp -> next = list;

                list = tmp;
            }
        }

        count ++;
    }


    return list;
}

void write(elem *list) {
    FILE  *fileW;
    elem *tmp = list;

    fileW = fopen("CounterWrite.txt", "w");

    while (tmp != NULL) {
        printf("\t%10s:\t%d\n", tmp -> word, tmp -> times);
        tmp = tmp -> next;
    }

    fclose(fileW);
}
