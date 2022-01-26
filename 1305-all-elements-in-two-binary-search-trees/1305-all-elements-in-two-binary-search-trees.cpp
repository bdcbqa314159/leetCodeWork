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
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector<int> v1 = inorderTraversal(root1);
        vector<int> v2 = inorderTraversal(root2);
        
        int n = v1.size();
        int m = v2.size();
        
        int l1 = 0;
        int l2 = 0;
        
        vector<int> ans;
        
        while (l1 < n && l2 < m){
            if (v1[l1]<v2[l2]){
                ans.push_back(v1[l1]);
                l1++;
            }
                
            else{
                ans.push_back(v2[l2]);
                l2++;
            }
            
        }
        
        while(l1<n){
            ans.push_back(v1[l1]);
            l1++;
        }
        
        while(l2<m){
            ans.push_back(v2[l2]);
            l2++;
        }
        
        return ans;
        
    }
};