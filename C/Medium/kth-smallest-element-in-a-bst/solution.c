#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

static void doKthSmallest(struct TreeNode *root, int k, int *nums);

int kthSmallest(struct TreeNode* root, int k) {
    int *nums = calloc(2, sizeof(*nums));
    doKthSmallest(root, k, nums);
    int kth_index = nums[1];
    free(nums);
    return kth_index;
}

static void doKthSmallest(struct TreeNode *root, int k, int *nums) {
    if (!root) return;

    doKthSmallest(root->left, k, nums);
    if (++nums[0] == k) {
        nums[1] = root->val;
        return;
    }
    doKthSmallest(root->right, k, nums);
}
