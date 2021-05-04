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
int rangeSumBST(struct TreeNode* root, int low, int high){
    if (root == NULL) return 0;

    if (high < root->val) {
        return rangeSumBST(root->left, low, high);
    } else if (low > root->val) {
        return rangeSumBST(root->right, low, high);
    }

    return rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high) + root->val;
}

/*
 * recursive brute-force solution
 * time complexity: O(n)
 * space complexity: O(n)
*/
int rangeSumBST2(struct TreeNode* root, int low, int high){
    if (root == NULL) {
        return 0;
    }

    if (root->val >= low && root->val <= high) {
        return rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high) + root->val;

    } else {
        return rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
    }
}
