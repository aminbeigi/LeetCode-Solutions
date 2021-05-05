#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int doSumOfLeftLeaves(struct TreeNode* root, bool isLeft);

// bool flag solution
int sumOfLeftLeaves(struct TreeNode* root) {
    return doSumOfLeftLeaves(root, false);
}

int doSumOfLeftLeaves(struct TreeNode* root, bool isLeft) {
    if (root == NULL) return 0;

    if (root->left == NULL && root->right == NULL) {
        return isLeft ? root->val : 0;
    }
    return doSumOfLeftLeaves(root->left, true) + doSumOfLeftLeaves(root->right, false);
}

// check left two nodes deep solution
int sumOfLeftLeaves2(struct TreeNode* root) {
    if (root == NULL ) return 0;

    if (root->left == NULL && root->right == NULL) return 0;
    if (root->left == NULL && root->right != NULL) return sumOfLeftLeaves(root->right);

    if (root->left->left == NULL && root->left->right == NULL) {
        return root->left->val + sumOfLeftLeaves(root->right);
    }

    return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
}
