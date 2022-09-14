# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pseudoPalindromicPaths (self, root: Optional[TreeNode]) -> int:
        
        def dfs(cur, seen):
            nonlocal ans
            
            if cur.val in seen:
                seen.remove(cur.val)
            else:
                seen.add(cur.val)
                
            if cur.left:
                dfs(cur.left, seen.copy())
            if cur.right:
                dfs(cur.right, seen.copy())
            
            if not cur.left and not cur.right:
                if len(seen)<=1:
                    ans+=1
        ans = 0
        dfs(root, set())
        
        return ans

     
        