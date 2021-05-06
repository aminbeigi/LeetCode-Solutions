#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *curr = head;
    struct ListNode *prev = NULL;

    while (curr) {
        if (prev && curr->val == prev->val) {
            curr = prev;
            curr->next = curr->next->next;            
        }
        prev = curr;
        curr = curr->next;
    }
    return head;
}
