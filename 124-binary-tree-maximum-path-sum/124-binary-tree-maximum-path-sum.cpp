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
    int globalMaxSum = INT_MIN;
    int helper(TreeNode* root){
        if(!root) return 0;
        int left = helper(root->left);
        int right = helper(root->right);
        
        int link2neither = root->val;
        int link2left = root->val + left;
        int link2right = root->val + right;
        int link2both = root->val + left+right;
        
        int maxSum = max(max(link2neither, link2left), max(link2right, link2both));
        int linkableMaxSum = max(max(link2neither, link2left), link2right);
        globalMaxSum = max(maxSum, globalMaxSum);        
        return linkableMaxSum;
    }
    
    int maxPathSum(TreeNode* root) {
        helper(root);
        return globalMaxSum;
    }
};