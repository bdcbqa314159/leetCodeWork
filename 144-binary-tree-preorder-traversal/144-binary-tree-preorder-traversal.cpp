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
    
    void helper(TreeNode *n, vector<int>& x){
        if (!n) return;
        x.push_back(n->val);
        helper(n->left, x);
        helper(n->right,x);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        if (!root) return {};
        vector<int> x;
        helper(root, x);
        return x;
    }
};