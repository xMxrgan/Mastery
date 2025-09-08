#include <stdio.h>
#include <stdlib.h>

// Definizione base della lista
struct ListNode {
  int val;
  struct ListNode *next;
};

// Crea un nuovo nodo
struct ListNode *createNode(int val) {
  struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
  node->val = val;
  node->next = NULL;
  return node;
}

// Stampa la lista
void printList(struct ListNode *head) {
  while (head) {
    printf("%d -> ", head->val);
    head = head->next;
  }
  printf("NULL\n");
}

// Libera la memoria della lista
void freeList(struct ListNode *head) {
  while (head) {
    struct ListNode *temp = head;
    head = head->next;
    free(temp);
  }
}

struct ListNode *mergeTwoLists(struct ListNode *l1, struct ListNode *l2) {
  struct ListNode *united_list = NULL;

  if (!l2) {
    return l1;
  }
  if (!l1) {
    return l2;
  }

  while (l1 && l2) {
    if (l1->val <= l2->val) {
      if (united_list) {
        united_list->next = l1;
      } else {
        united_list = l1;
      }

      l1 = l1->next;

    } else {
      if (united_list) {
        united_list->next = l2;
      } else {
        united_list = l2;
      }

      l2 = l2->next;
    }
  }

  return united_list;
}

int main() {
  // Lista 1: 1 -> 2 -> 4
  struct ListNode *l1 = createNode(1);
  l1->next = createNode(2);
  l1->next->next = createNode(4);

  // Lista 2: 1 -> 3 -> 4
  struct ListNode *l2 = createNode(1);
  l2->next = createNode(3);
  l2->next->next = createNode(4);

  printf("Lista 1: ");
  printList(l1);
  printf("Lista 2: ");
  printList(l2);

  // Unione
  struct ListNode *merged = mergeTwoLists(l1, l2);

  printf("Lista unita: ");
  printList(merged);

  // Libera la memoria
  freeList(merged);

  return 0;
}
