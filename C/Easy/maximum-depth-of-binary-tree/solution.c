#include <stdlib.h>

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
int maxDepth(struct TreeNode* root) {
    if (root == NULL) return 0;

    int lheight = maxDepth(root->left);
    int rheight = maxDepth(root->right);

    if (lheight > rheight) {
        return 1 + lheight;
    }
    return 1 + rheight;
}
