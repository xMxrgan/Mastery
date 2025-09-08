/*
Sia data una lista i cui nodi sono definiti tramite la seguente struttura C:

struct nodo{
int valore;
struct nodo *next; };

Scrivere due funzioni C RICORSIVE che ricevendo in ingresso un puntatore alla
lista: (1) stampano la lista e (2) contano quanti multipli di 3 sono presenti
nella lista. NB: per testare il programma scrivere la funzione inserisci in
testa per creare una lista con 10 valori.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 8

typedef struct node {
  int datum;
  struct node *next;
} elem;

elem *insert_head(elem *, int);
elem *insert_tail(elem *, int);
elem *remove_elem(elem *, int);
elem *union_of_two(elem *, elem *);
elem *reverse_list(elem *);
void view(elem *);
void destroy(elem *);

int main() {
  elem *head_list = NULL;
  elem *tail_list = NULL;
  elem *reversed_list = NULL;
  int value;

  printf("Please, insert a list of numbers:\n");

  scanf("%d", &value);
  do {
    head_list = insert_head(head_list, value);
    tail_list = insert_tail(tail_list, value);
    scanf("%d", &value);
  } while (value > 0);

  view(head_list);
  view(tail_list);

  printf("Remove one:\n");
  scanf("%d", &value);
  head_list = remove_elem(head_list, value);
  tail_list = remove_elem(tail_list, value);
  view(head_list);
  view(tail_list);

  reversed_list = reverse_list(head_list);
  view(reversed_list);
  reversed_list = reverse_list(tail_list);
  view(reversed_list);
}

elem *insert_head(elem *list, int value) {
  elem *tmp;

  tmp = (elem *)malloc(sizeof(elem));

  if (tmp != NULL) {
    tmp->datum = value;
    tmp->next = list;

    list = tmp;
  } else {
    printf("ERROR!");
  }

  return list;
}

elem *insert_tail(elem *list, int value) {
  elem *prev = NULL;
  elem *tmp = NULL;

  tmp = (elem *)malloc(sizeof(elem));

  if (tmp != NULL) {
    tmp->datum = value;
    tmp->next = NULL;
  } else {
    printf("ERROR!");
  }

  if (list != NULL) {
    for (prev = list; prev->next != NULL; prev = prev->next)
      ;
    prev->next = tmp;
  } else {
    list = tmp;
  }

  return list;
}

void view(elem *list) {
  while (list != NULL) {
    if (list->next != NULL) {
      printf("%d -> ", list->datum);
    } else {
      printf("%d", list->datum);
    }
    list = list->next;
  }

  printf("\n");
}

elem *remove_elem(elem *list, int value) {
  elem *curr = list;
  elem *term = NULL;
  elem *prev = NULL;

  while (curr) {
    if (curr->datum == value) {
      if (prev) {

        term = curr;
        prev->next = curr->next;
        curr = curr->next;
        free(term);

      } else {
        term = curr;
        curr = curr->next;
        free(term);
      }
    } else {
      prev = curr;
      curr = curr->next;
    }
  }

  return list;
}
/*
elem *union_of_two(elem *list1, elem *list2) {
  elem *list1_runner = list1;
  elem *list2_runner = list2;
  elem *final_list = NULL;

  while (list1_runner != NULL && list2_runner != NULL) {

    if (final_list) {

      if (list1_runner) {

      } else {
      }

      if (list2_runner) {
      }

    } else {
    }

    list1_runner = list1_runner->next;
    list2_runner = list2_runner->next;
  }
}


elem *insertion_sort(elem *list) {
  int length = 0;
  elem *curr = list;
  for (curr = list; curr != NULL; curr = curr->next) {
    length++;
  }

  for (int i = 0; i <= length; i++) {
  }
}
*/

elem *reverse_list(elem *list) {
  elem *curr = list;
  elem *prev = NULL;
  elem *next = NULL;

  while (curr != NULL) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }

  return prev;
}
