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
    
    int helper(TreeNode* node, int &h){
        if (!node){
            h = 0;
            return 0;
        }
        int h1 = 0, h2 = 0;
        int d1 = helper(node->left, h1), d2 = helper(node->right, h2);
        h = max(h1, h2)+1;
        
        return max(max(d1, d2), h1+h2);
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        int h = 0;
        return helper(root, h);
    }
};