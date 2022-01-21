/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    
    void dfs(Node* Left, Node* Right){
        
        if (!Left) return;
        
        Left->next = Right;
        
        dfs(Left->left, Left->right);
        dfs(Left->right, Right->left);
        dfs(Right->left, Right->right);
        
    }
    
    
    Node* connect(Node* root) {
        
        if (!root) return NULL;
        
        dfs(root->left, root->right);
        return root;
        
    }
};