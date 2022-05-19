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
    
    void helper(TreeNode* node, vector<int>& x){
        if (!node) return;
        helper(node->left,x);
        helper(node->right,x);
        x.push_back(node->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        if (!root) return {};
        vector<int> x;
        helper(root, x);
        return x;
    }
};