#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head);

/*
 * reverse solution
 * time complexity: O(n)
 * space complexity: O(1)
*/
bool isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        // empty or single element list is a palindrome
        return true;
    }

    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    slow->next = reverseList(slow->next); // reverse second half of list
    slow = slow->next;
    while (slow != NULL){
        if (head->val != slow->val) {
            return false;
        }
        head = head->next;
        slow = slow->next;
    }
    return true;
}

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* tmp;
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;

    while (curr != NULL) {
        tmp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = tmp;
    }
    return prev;
}
