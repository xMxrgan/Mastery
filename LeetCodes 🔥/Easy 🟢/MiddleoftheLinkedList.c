/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *tmp = head;
    int tot = 0, count = 0;

    while (tmp) {                           // Counting the elements
        tot ++;
        tmp = tmp -> next;
    }

    for (tmp = head; tmp != NULL; tmp = tmp -> next) {
        count ++;

        if (count == tot / 2 + 1) {
            head = tmp;
            return head;
        }
    }

    return 0;
}
