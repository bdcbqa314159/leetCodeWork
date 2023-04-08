/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node *temp = head;
        stack<Node*> st;
        
        while (temp){
            
            if (temp->child){
                if (temp->next) st.push(temp->next);
                temp->next = temp->child;
                temp->next->prev = temp;
                temp->child = 0;   
            }
            
            else if (!temp->next && !st.empty()){
                temp->next = st.top();
                st.pop();
                temp->next->prev = temp;
            }
            
            temp = temp->next;
        }
        return head;
    }
};