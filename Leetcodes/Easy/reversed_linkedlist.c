#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int datum;
  struct node *next;
} elem;

elem *insert_tail(elem *list, int value) {
  elem *tmp = NULL;
  elem *prev;
  elem *curr;

  tmp = (elem *)malloc(sizeof(elem));

  if (tmp) {
    tmp->datum = value;
    tmp->next = NULL;

    if (list) {
      for (prev = list; prev->next != NULL; prev = prev->next)
        ;
      prev->next = tmp;
    } else {
      list = tmp;
    }
  } else {
    printf("ERROR!");
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

int main() {
  int value;
  elem *list = NULL;

  do {
    scanf("%d", &value);
    list = insert_tail(list, value);
  } while (value > 0);

  view(list);
}
