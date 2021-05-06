#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeElements(struct ListNode* head, int val){
    if (!head) return NULL;

    struct ListNode *curr = head;
    struct ListNode *prev = NULL;
    while (curr != NULL) {
        if (head->val == val) {
            // remove from start
            head = head->next;
        } else if (curr->val == val) {
            // remove from middle/end
            curr = prev;
            curr->next = curr->next->next; 
        }
        prev = curr;
        curr = curr->next;
    }
    return head;
}
