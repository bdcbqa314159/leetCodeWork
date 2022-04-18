# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def inOrder(self, root):
        
        if root:
            self.inOrder(root.left)
            self.k -= 1
            if self.k == 0:
                self.res = root.val
                return
            self.inOrder(root.right)
        
    def kthSmallest(self, root: TreeNode, k: int) -> int:
        
        self.k = k
        self.res = None
        self.inOrder(root)
        
        return self.res
        