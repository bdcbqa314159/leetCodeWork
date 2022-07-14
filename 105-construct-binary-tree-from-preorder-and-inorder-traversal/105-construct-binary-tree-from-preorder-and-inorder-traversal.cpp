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
    
    TreeNode* helper(vector<int> inOrder, vector<int> preOrder, int inS, int inE, int preS, int preE ){
        
        if (inS > inE || preS > preE) return NULL;
        
        int rootData = preOrder[preS];
        
        int rootIndex = -1;
        
        for (int i = inS; i<=inE; i++){
            
            if (inOrder[i] == rootData){
                rootIndex = i;
                break;
            }
        }
        
        int lInS = inS;
        int lInE = rootIndex -1;
        int lPreS = preS+1;
        int lPreE = lInE+lPreS-lInS;
        
        int rInS = rootIndex+1;
        int rInE = inE;
        int rPreS = lPreE+1;
        int rPreE = preE;
        
        TreeNode* root = new TreeNode(rootData);
        
        root->left = helper(inOrder, preOrder, lInS, lInE, lPreS, lPreE);
        root->right = helper(inOrder, preOrder, rInS, rInE, rPreS, rPreE);
        
        return root;
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int n = inorder.size();
        return helper(inorder, preorder, 0, n-1, 0,n-1);
        
    }
};