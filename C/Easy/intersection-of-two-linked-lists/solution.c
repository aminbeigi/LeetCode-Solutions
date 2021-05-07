#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if (!headA || !headB) return NULL;

    struct ListNode *currA = headA;
    struct ListNode *currB = headB;
    while (currA && currB && currA != currB) {
        currA = currA->next;
        currB = currB->next;

        if (currA == currB) return currA;

        if (currA == NULL) currA = headB;
        if (currB == NULL) currB = headA;
    }
        
    return currA;
}
