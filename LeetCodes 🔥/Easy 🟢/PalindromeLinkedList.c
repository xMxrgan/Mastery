/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool isPalindrome(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;
    struct ListNode *next;
    int flag = 1;                           // Checking if the two are the same

    while (curr) {
        next = curr -> next;
        curr -> next = prev;

        prev = curr;
        curr = next;
    }

    while (head) {
        if (head -> val !=  prev -> val) {
            flag = 0;
        }
        prev = prev -> next;
        head = head -> next;
    }
    
    if (flag == 1) {
        return true;
    } else {
        return false;
    }
}
