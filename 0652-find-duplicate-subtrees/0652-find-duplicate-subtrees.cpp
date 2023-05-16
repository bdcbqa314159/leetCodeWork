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
    
    string helper(TreeNode* node, map<int,vector<TreeNode*>>&m){
        if (!node) return "#";
        string left = helper(node->left, m);
        string right = helper(node->right, m);
        
        int curr = hash<string>{}(left+ to_string(node->val)+right);
        m[curr].push_back(node);
        
        return to_string(curr);
    }
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> result;
        map<int, vector<TreeNode*>> m;
        helper(root, m);
        for (auto x: m){
            if (x.second.size()>1)
                result.push_back(x.second[0]);
        }
        return result;
    }
};