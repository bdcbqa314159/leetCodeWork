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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ret;
        double sum = 0, count = 0;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        while (!q.empty()) {
            TreeNode* t = q.front();
            q.pop();
            if (t == nullptr) {
                ret.push_back(sum / count);
                sum = count = 0;
                if (!q.empty()) q.push(nullptr);
            } else {
                sum += t->val;
                ++count;
                if (t->left) q.push(t->left);
                if (t->right) q.push(t->right);
            }
        }
        return ret;
    }
};