/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode * prev = NULL;
    struct ListNode * curr = head;
    struct ListNode *term;

    while (curr != NULL) {

        if (curr -> val == val) {           // Equal to val
            
            if (prev != NULL) {
                prev -> next = curr -> next;
                term = curr;
                curr = head;
                free(term);
                
            } else {
                head = curr -> next;
                term = curr;
                curr = head;
                free(term);

            }

        } else {                            // Disequal to val
            prev = curr;
            curr = curr -> next;
        }
    }

    return head;                               // If there is no val
}
