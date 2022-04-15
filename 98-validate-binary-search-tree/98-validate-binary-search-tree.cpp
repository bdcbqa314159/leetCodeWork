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
public:
    
    bool helper(TreeNode *root, long long m = -10000000000, long long M = 10000000000){
        if (!root) return true;
        bool l,r;
        
        l = helper(root->left, m, root->val);
        r = helper(root->right, root->val, M);
        
        return l && r && m<root->val && root->val<M;
    }
    
    bool isValidBST(TreeNode* root) {
        return helper(root);
    }
};