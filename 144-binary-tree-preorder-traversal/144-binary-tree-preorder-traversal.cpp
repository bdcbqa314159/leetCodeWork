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
    
    void helper(TreeNode* node, vector<int>& out){
        
        if (!node) return;
        out.push_back(node->val);
        helper(node->left, out);
        helper(node->right, out);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> out{};
        helper(root, out);
        return out;
    }
};