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
    
    bool helper(TreeNode* r, TreeNode* l){
        if (!r && l) return false;
        if (!l && r) return false;
        if (!r && !l) return true;
        if (l->val != r->val) return false;
        
        return helper(l->right, r->left) && helper(l->left, r->right);
    }
    
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return helper(root->left, root->right);
    }
};