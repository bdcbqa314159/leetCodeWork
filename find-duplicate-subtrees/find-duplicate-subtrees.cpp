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
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> result;
        map<size_t, vector<TreeNode*>> myMap;
        
        merkle(root, myMap);
        
        for (const auto &x: myMap){
            if (x.second.size() >1)
                result.push_back(x.second[0]);
        }
        return result;
    }
    
    string merkle(TreeNode* root, map<size_t, vector<TreeNode*>> &myMap){
        if (!root) return "#";
        
        string left = merkle(root->left, myMap);
        string right = merkle(root->right, myMap);
        
        size_t current = hash<string>{}(left + to_string(root->val)+right);
        myMap[current].push_back(root);
        
        return to_string(current);
    }
};