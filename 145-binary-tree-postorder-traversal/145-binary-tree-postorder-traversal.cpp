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
    void helper(TreeNode* node, vector<int>& u){
        if (!node) return;
        helper(node->left, u);
        helper(node->right, u);
        u.push_back(node->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        if (!root) return{};
        vector<int> u;
        helper(root, u);
        return u;
    }
};