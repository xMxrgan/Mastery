/*
Write a program that takes froma file all the words in a dynamic list, count which are the most used words and print on another file all the word in order of usage, decide if you want them in order of frequency or alphabetical
Put a control that the words have to be at least of 4 letter
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int word;
    int times;
    struct node *next;
} elem;

elem *createList(elem *, char *, int);
//void write();
//int counter(char *);
//elem *alphabetOrder(elem *);
//elem *freqOrder(elem *);

int main() {
    FILE *File;
    char *String;
    elem *List;

    File = fopen("CounterText.txt", "r");

    while (!feof(File)) {
        fscanf(File, "%s ", String);
        List = createList(List, String, )
    }
}
