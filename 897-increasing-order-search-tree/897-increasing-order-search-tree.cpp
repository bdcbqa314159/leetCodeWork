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
    
    void helper(TreeNode *root, vector<int>& ans){
        if (!root) return;
        helper(root->left, ans);
        ans.push_back(root->val);
        helper(root->right, ans);
    }
    
    vector<int> inOrderTraversal(TreeNode *root){
        vector<int> out;
        helper(root, out);
        return out;
    }
    
    
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> out = inOrderTraversal(root);
        TreeNode *ans = new TreeNode(out[0]);
        TreeNode *next = ans;
        for (int i = 1; i<out.size(); i++){
            TreeNode *t = new TreeNode(out[i]);
            next->right = t;
            next = next->right;
        }
        
        return ans;
            
    }
};