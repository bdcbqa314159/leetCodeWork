/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        stack<Node*> st;
        vector<int> out;
        
        if (!root) return out;
        st.push(root);
        
        while (!st.empty()){
            Node* cur = st.top(); st.pop();
            out.push_back(cur->val);
            reverse(cur->children.begin(), cur->children.end());
            
            for (Node* n: cur->children)
                st.push(n);
        }
        return out;
    }
    
};