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
    
    void helper(TreeNode* root, vector<int>& x){
        if (!root) return;
        helper(root->left, x);
        x.push_back(root->val);
        helper(root->right, x);
    }
    
    vector<int> inOrder(TreeNode* root){
        if (!root) return {};
        vector<int> out;
        helper(root, out);
        return out;
    }
    
    
    bool findTarget(TreeNode* root, int k) {
        if (!root) return false;
        vector<int> order = inOrder(root);
        int l = 0, r = order.size()-1;
        
        while (l<r){
            int sum = order[l]+order[r];
            if (sum == k) return true;
            else if (sum<k) l++;
            else r--;
        }
        
        return false;
    }
};