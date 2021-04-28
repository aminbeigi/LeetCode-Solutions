#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

/*
 * recursive solution
 * time complexity: O(n)
 * space complexity: O(n)
*/
bool isSameTree(struct TreeNode *p, struct TreeNode *q) {
    if (p == NULL || q == NULL) {
        return (p == q);
    }
    return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
}
