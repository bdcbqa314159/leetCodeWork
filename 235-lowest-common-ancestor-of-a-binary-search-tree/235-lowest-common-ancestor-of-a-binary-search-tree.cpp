/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int x = root->val, u = p->val, v = q->val;
        if (u<x && v<x)
            return lowestCommonAncestor(root->left, p, q);
        else if (u>x && v>x)
            return lowestCommonAncestor(root->right, p, q);
        else
            return root;
    }
};