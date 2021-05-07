#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

static bool doIsValidBST(struct TreeNode* root, struct TreeNode* min, struct TreeNode* max);

bool isValidBST(struct TreeNode* root) {
    return doIsValidBST(root, NULL, NULL);
}

static bool doIsValidBST(struct TreeNode* root, struct TreeNode* min, struct TreeNode* max) {
    if (!root) return true;
    if (min && root->val <= min->val || max && root->val >= max->val) return false;
    return doIsValidBST(root->left, min, root) && doIsValidBST(root->right, root, max);
}
