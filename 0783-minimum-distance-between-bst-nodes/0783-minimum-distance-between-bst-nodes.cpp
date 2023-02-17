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
    
    void dfs(TreeNode* root, int &pv, int& result) {
        if (!root) return;
        dfs(root->left, pv, result);
        if (pv != INT_MIN) result = min(result, abs(pv - root->val));
        pv = root->val;
        dfs(root->right, pv, result);
    }
    
public:
    int minDiffInBST(TreeNode* root) {
        int pv = INT_MIN;
        int result = INT_MAX;
        dfs(root, pv, result);
        return result;
    }
};