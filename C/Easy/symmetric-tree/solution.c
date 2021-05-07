#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

static bool doIsSymmetric(struct TreeNode* p, struct TreeNode* q);

bool isSymmetric(struct TreeNode* root) {
    return doIsSymmetric(root, root);
}

static bool doIsSymmetric(struct TreeNode* p, struct TreeNode* q) {
    if (p == NULL || q == NULL) {
        return (p == q);
    }

    return (p->val == q->val && doIsSymmetric(p->left, q->right) && doIsSymmetric(p->right, q->left));
}
