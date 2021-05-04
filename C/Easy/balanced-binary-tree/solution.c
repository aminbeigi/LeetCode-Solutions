#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

static int height(struct TreeNode* root);

bool isBalanced(struct TreeNode* root) {
    if (root == NULL) return true;
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    return abs(lHeight - rHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right);
}

static int height(struct TreeNode* root) {
    if (root == NULL) return 0;

    int lHeight = height(root->left);
    int rHeight = height(root->right);

    return lHeight >= rHeight ? lHeight+1 : rHeight+1;
}
