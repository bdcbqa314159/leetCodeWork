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
    
    void helper(TreeNode* node, vector<int>& y){
        if (!node) return;
        helper(node->left, y);
        helper(node->right, y);
        y.push_back(node->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        if (!root) return {};
        vector<int> v;
        helper(root, v);
        return v;
    }
};