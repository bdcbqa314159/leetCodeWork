# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        if not root: return 0
        
        q = deque([(root, 1)])
        
        while q:
            cand, num = q.popleft()
            if not cand.left and not cand.right: return num
            if cand.left: q.append((cand.left, num+1))
            if cand.right: q.append((cand.right, num+1))
            
        return -1
        