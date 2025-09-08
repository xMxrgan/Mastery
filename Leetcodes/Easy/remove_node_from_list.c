/*
 *
 *  Remove Nth Node From EndConsegna: Scrivi una funzione in C che rimuova il
nodo alla posizione n dalla fine di una lista concatenata singolarmente, in una
sola passata (one-pass). La lista usa uint32_t per i valori e termina con un
nodo con valore (uint32_t)-1. No allocazione dinamica o librerie
standard.Struttura:c

struct ListNode {
    uint32_t val;
    struct ListNode* next;
};

Input:head: puntatore alla testa della lista.
n: posizione dalla fine (1-based).

Output: Puntatore alla testa della lista modificata.Esempio:Input: head =
1->2->3->4->5->(uint32_t)-1, n = 2 Output: 1->2->3->5->(uint32_t)-1 Input: head
= 1->(uint32_t)-1, n = 1 Output: (uint32_t)-1
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} elem;

elem *insert_tail(elem *list, int value) {
  elem *tmp = NULL;
  elem *prev = NULL;

  tmp = (elem *)malloc(sizeof(elem));

  if (tmp) {
    tmp->data = value;
    tmp->next = NULL;

    if (list) {
      for (prev = list; prev->next != NULL; prev = prev->next)
        ;
      prev->next = tmp;
    } else {
      list = tmp;
    }

  } else {
    printf("Error!");
  }

  return list;
}

elem *remove_from_tail(elem *list, int position) {

  elem *counter_node = list;
  int count = 0;
  elem *prev = list;
  elem *curr = list;

  elem *cancel = NULL;

  while (counter_node) {
    count++;
    counter_node = counter_node->next;
  }

  position = count - position;

  if (!position && !prev) {
    return list->next;
  }

  for (prev = list; prev != NULL; prev = prev->next) {
    if (position == 1) {
      cancel = prev->next;
      prev->next = cancel->next;

      free(cancel);
    }
    position--;
  }

  return list;
}

void print_list(elem *list) {
  while (list) {
    if (list->next) {
      printf("%d -> ", list->data);
    } else {
      printf("%d\n", list->data);
    }

    list = list->next;
  }
}

int main() {
  int value;
  elem *list = NULL;
  printf("Please, give me a serie of numbers:\n");

  do {
    scanf("%d", &value);
    list = insert_tail(list, value);

  } while (value > 0);

  print_list(list);
  printf("Now remove a number chosing its position from the end backwards:\n");
  scanf("%d", &value);

  list = remove_from_tail(list, value);
  print_list(list);
}
