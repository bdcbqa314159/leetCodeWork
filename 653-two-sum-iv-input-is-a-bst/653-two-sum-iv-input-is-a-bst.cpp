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
    
    void helper(TreeNode* root, vector<int>& ans){
        if (!root) return;
        helper(root->left, ans);
        ans.push_back(root->val);
        helper(root->right, ans);
    }
    
    vector<int> inOrderTraversal(TreeNode* root){
        vector<int> ans;
        helper(root, ans);
        return ans;
    }
    
    bool findTarget(TreeNode* root, int k) {
       
        vector<int> tree = inOrderTraversal(root);
        int l = 0, r = tree.size()-1;
        
        while(l<r){
            int sum = tree[l]+tree[r];
            if (sum == k) return true;
            else if (sum>k) r--;
            else l++;
        }return false;
    }
};