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
    
    bool helper(TreeNode* node, long long m = -1e10, long long M = 1e10){
        if (!node) return true;
        bool l,r;
        l = helper(node->left, m, node->val);
        r = helper(node->right, node->val, M);
        
        return l&r& m<node->val&& node->val<M;
    }
    
    bool isValidBST(TreeNode* root) {
        return helper(root);
    }
};