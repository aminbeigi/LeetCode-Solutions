#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* newNode(int val);

struct ListNode* deleteDuplicates(struct ListNode* head){
    if (!head) return NULL;

    struct ListNode *dummy = newNode(-101);
    dummy->next = head;
    struct ListNode *curr = head;
    struct ListNode *prev = dummy;

    while (curr && curr->next) {
        if (curr->val == curr->next->val) {
            while (curr && curr->next && curr->val == curr->next->val) {
                curr = curr->next;
            }
            prev->next = curr->next;
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
    return dummy->next;
}

struct ListNode* newNode(int val) {
    struct ListNode *n = malloc(sizeof(*n));
    if (!n) {
        fprintf(stderr, "Could not allocate memory");
    }
    n->val = val;
    n->next = NULL;
    return n;
}
