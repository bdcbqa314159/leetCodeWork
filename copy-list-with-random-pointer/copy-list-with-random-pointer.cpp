/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> umap;
        Node *curr = head;
        
        while (curr){
            Node *copy = new Node(curr->val);
            umap[curr] = copy;
            curr = curr->next;
        }
        
        curr = head;
        
        while (curr){
            Node *copy = umap[curr];
            copy->next = umap[curr->next];
            copy->random = umap[curr->random];
            
            curr = curr->next;
        }
        return umap[head];
    }
};