/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    
    Node* helper(Node* node, unordered_map<int, Node*>& visited){
        Node* newNode = new Node(node->val);
        visited.insert({newNode->val, newNode});
        
        for (Node* n: node->neighbors){
            auto it = visited.find(n->val);
            if (it == visited.end()){
                Node* clone = helper(n, visited);
                newNode->neighbors.push_back(clone);
            }
            else
                newNode->neighbors.push_back(it->second);
        }
        
        return newNode;
    }
    
    Node* cloneGraph(Node* node) {
        if (!node) return 0;
        unordered_map<int, Node*> visited;
        return helper(node, visited);
    }
};