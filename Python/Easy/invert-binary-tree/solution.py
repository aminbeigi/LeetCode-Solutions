# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    # recursive solution
    # time complexity: O(n)
    # space complexity: O(n)
    def invertTree(self, root: TreeNode) -> TreeNode:
        if root == None:
            return None
        
        left = self.invertTree(root.left)
        right = self.invertTree(root.right)
        
        # swap
        root.left = right
        root.right = left
        
        return root