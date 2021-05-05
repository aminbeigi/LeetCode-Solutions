#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool doIsUnivalTree(struct TreeNode* root, int value);

bool isUnivalTree(struct TreeNode* root) {
    if (root == NULL) return true;

    return doIsUnivalTree(root, root->val);
}

bool doIsUnivalTree(struct TreeNode* root, int value) {
    if (root == NULL) return true;

    return root->val == value && doIsUnivalTree(root->left, value) && doIsUnivalTree(root->right, value);
}
