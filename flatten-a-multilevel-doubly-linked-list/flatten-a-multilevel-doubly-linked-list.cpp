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
        Node*temp=head;
        while(temp){
            if(temp->child){
                Node* nex = temp->child;
                while(nex->next) nex=nex->next;
                nex->next=temp->next;
                if(temp->next) temp->next->prev=nex;
                temp->child->prev=temp;
                temp->next=temp->child;
                temp->child=NULL;
            }
            temp=temp->next;
        }
        return head;
    }
};