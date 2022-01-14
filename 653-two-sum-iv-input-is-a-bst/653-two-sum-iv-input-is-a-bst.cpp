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
    
    void inOrder(TreeNode* root, vector<int>& v){
        if (!root) return;
        
        inOrder(root->left, v);
        v.push_back(root->val);
        inOrder(root->right, v);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
         
        vector<int> ans;
        inOrder(root, ans);
        return ans;
        
    }
    
    
    bool findTarget(TreeNode* root, int k) {
        
        vector<int> inOrderV{};
        inOrderV = inorderTraversal(root);
        int left = 0;
        int right = inOrderV.size()-1;
        
        while(left<right){
            if (inOrderV[left]+inOrderV[right] == k) return true;
            else if (inOrderV[left]+inOrderV[right] > k) right--;
            else left++;
        }
        
        return false;
        
    }
};