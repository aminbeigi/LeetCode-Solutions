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
int minDepth(struct TreeNode* root) {
    if (root == NULL) return 0;

    if (root->left == NULL) {
        // node only has right subtree
        return 1 + minDepth(root->right);
    } else if (root->right == NULL) {
        // node only has left subtree
        return 1 + minDepth(root->left);
    }
    
    int lheight = minDepth(root->left);
    int rheight = minDepth(root->right);

    return lheight > rheight ? 1+rheight : 1+lheight;
}
