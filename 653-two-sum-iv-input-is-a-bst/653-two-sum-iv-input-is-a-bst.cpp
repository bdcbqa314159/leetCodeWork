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
    
    void helper(TreeNode* root, vector<int>&u){
        if (!root) return;
        helper(root->left, u);
        u.push_back(root->val);
        helper(root->right, u);
    }
    
    vector<int> inOrder(TreeNode* root){
        if (!root) return {};
        vector<int> ans;
        helper(root, ans);
        return ans;
    }
    
    bool findTarget(TreeNode* root, int k) {
        if (!root) return false;
        vector<int> ans = inOrder(root);
        int l = 0, r = ans.size()-1;
        while (l<r){
            int sum = ans[l]+ans[r];
            if (sum == k) return true;
            else if (sum>k) r--;
            else l++;
        }
        return false;
    }
};