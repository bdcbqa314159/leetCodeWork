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
    
    void helper(TreeNode* node, vector<int>& v){
        if (!node) return;
        v.push_back(node->val);
        helper(node->left, v);
        helper(node->right, v);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (!root) return ans;
        helper(root, ans);
        return ans;
    }
};