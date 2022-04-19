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
    TreeNode *prev, *first, *second;
    
    void inOrder(TreeNode *root){
        if (!root) return;
        inOrder(root->left);
        if (!first && root->val< prev->val)
            first = prev;
        if (first && root->val<prev->val)
            second = root;
        prev=root;
        inOrder(root->right);
    }
    
    void recoverTree(TreeNode* root) {
        prev = new TreeNode(INT_MIN);
        inOrder(root);
        swap(first->val, second->val);
    }
};