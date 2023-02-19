# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def zigzagLevelOrder(self, root: TreeNode) -> List[List[int]]:
        
        output = []
        
        def dfs(node, level, output):
            if not node:
                return
            
            if len(output)<=level:
                output += [[]]
            
            dfs(node.left, level+1, output)
            dfs(node.right, level+1, output)
            
            if level % 2 == 0:
                output[level].append(node.val)
                
            else:
                output[level].insert(0, node.val)
                
        dfs(root,0, output)
        
        return output