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
    
    void helper(TreeNode* root, vector<int>& out){
        if (!root) return;
        out.push_back(root->val);
        helper(root->left, out);
        helper(root->right, out);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> out;
        helper(root, out);
        return out;
    }
};