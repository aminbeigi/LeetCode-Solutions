#include <stdlib.h>
#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

static struct ListNode* newNode(int val);

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *dummy = newNode(-1);
    dummy->next = head; // avoid edge case of inserting into length 1 list
    struct ListNode *curr = dummy;
    struct ListNode *prev = dummy;

    // place curr on the correct node
    for (int i = n; i > -1; --i) {
        curr = curr->next;
    }

    // two pointer traversal with distance between of n 
    while (curr) {
        prev = prev->next;
        curr = curr->next;
    }
    
    prev->next = prev->next->next;

    return dummy->next;
}

static struct ListNode* newNode(int val) {
    struct ListNode* n = malloc(sizeof(*n));
    if (!n) {
        fprintf(stderr, "Couldn't allocate memory");
        exit(1);
    }
    n->val = val;
    n->next = NULL;
    return n;
} 
