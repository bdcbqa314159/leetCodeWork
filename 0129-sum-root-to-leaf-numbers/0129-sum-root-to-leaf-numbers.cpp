/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
    int help(TreeNode *root, int pVal)
    {
        if(!root->left && !root->right)
            return root->val + 10*pVal;
            
        root->val += 10*pVal;
        
        if(root->left && root->right)
            return help(root->left, root->val)+help(root->right, root->val);
        else if(root->left && !root->right)
            return help(root->left, root->val);
        else
            return help(root->right, root->val);
    }
    
public:
    int sumNumbers(TreeNode *root) {
        
        if(!root) return 0;
        
        return help(root, 0);
        
    }
};