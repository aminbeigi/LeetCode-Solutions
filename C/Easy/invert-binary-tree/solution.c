#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* invertTree(struct TreeNode* root){
    if (root == NULL) return NULL;

    struct TreeNode* left = root->left;
    root->left = root->right;
    root->right = left;
    invertTree(root->left);
    invertTree(root->right);
    return root;
}