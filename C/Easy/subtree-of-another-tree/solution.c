#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

static bool isSameTree(struct TreeNode* p, struct TreeNode* q);

bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
    if (!root) return false;
    if (isSameTree(root, subRoot)) return true;
    
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}

static bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (!p || !q) return p == q;

    return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

// solution doesn't work as the graph is not comprised of unique values
bool isSubtree2(struct TreeNode* root, struct TreeNode* subRoot) {
    if (!root) return false;
    if (root->val == subRoot->val) return isSameTree(root, subRoot);
    
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}
