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
    
    void inOrder(TreeNode* node, vector<int>&u){
        if (!node) return;
        inOrder(node->left, u);
        u.push_back(node->val);
        inOrder(node->right, u);
    }
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        if (!root) return {};
        vector<int> a;
        inOrder(root, a);
        return a;
    }
};