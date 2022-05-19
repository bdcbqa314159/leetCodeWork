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
    
    void helper(TreeNode* y, vector<int>& x){
        if (!y) return;
        helper(y->left, x);
        helper(y->right, x);
        x.push_back(y->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        if (!root) return {};
        vector<int> u;
        helper(root, u);
        return u;
    }
};