#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

/*
 * iterative solution
 * time complexity: O(n)
 * space complexity: O(1)
*/
struct TreeNode* searchBST(struct TreeNode* root, int val){
    struct TreeNode* curr = root;
    while (curr != NULL) {
        if (curr->val == val) {
            return curr; 
        } else if (val < curr->val) {
            curr = curr->left; 
        } else {
            curr = curr->right;
        }
    }
    return NULL;
}
