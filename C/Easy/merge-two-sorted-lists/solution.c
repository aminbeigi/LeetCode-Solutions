#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* createNode(int val);

/*
 * iterative solution
 * time complexity: O(n+m)
 * space complexity: O(1)
*/
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* dummy = createNode(-1);
    struct ListNode* last = dummy;
    while (l1 != NULL && l2 != NULL) {
        if (l1->val < l2->val) {
            last->next = l1;
            last = l1;
            l1 = l1->next;
        } else {
            last->next = l2;
            last = l2;
            l2 = l2->next;
        }
    }
    if (l1 != NULL) {
        last->next = l1;
    }

    if (l2 != NULL) {
        last->next = l2;
    }

    return dummy->next;
}

struct ListNode* createNode(int val) {
    struct ListNode* node = malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    if (node == NULL) {
        fprintf(stderr, "Couldn't allocate memory");
        exit(1);
    }
    return node;
}
