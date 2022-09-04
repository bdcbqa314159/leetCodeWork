# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def verticalTraversal(self, root: Optional[TreeNode]) -> List[List[int]]:
        
        mapper = defaultdict(list)
        def dfs(x,y, node):
            if not node:
                return
            dfs(x-1, y+1, node.left)
            dfs(x+1, y+1, node.right)
            
            mapper[(x,y)].append(node.val)
            
        dfs(0, 0, root)
        
        output = []
        
        old = float('-inf')
        for k,v in sorted(mapper.items()):
            
            if k[0] != old:
                output.append([])
            
            output[-1].extend(sorted(v))
            
            old = k[0]
            
        
        return output
            
        
        