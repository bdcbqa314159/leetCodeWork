class Node{
    
    public:
    int val;
    Node *prev, *next;
    
    Node(int val):val(val), prev(nullptr), next(nullptr){}
};

class MyLinkedList {
public:
    
    Node *head = 0;
    
    MyLinkedList() {
        
    }
    
    Node *getNode(int index){
        Node *t = head;
        for (int i = 0; i<index && t; i++)
            t = t->next;
        return t;
    }
    
    Node *getTail(){
        Node *t = head;
        while (t && t->next)
            t = t->next;
        return t;
    }
    
    int get(int index) {
        Node *t = getNode(index);
        return t == 0 ? -1: t->val;
    }
    
    void addAtHead(int val) {
        Node *t = new Node(val);
        t->next = head;
        if (head) head->prev = t;
        head = t;
        return;
    }
    
    void addAtTail(int val) {
        if (!head){
            addAtHead(val);
            return;
        }
        
        Node *prev = getTail();
        Node *t = new Node(val);
        
        prev->next = t;
        t->prev = prev;
        
        return;
    }
    
    void addAtIndex(int index, int val) {
        if (index == 0){
            addAtHead(val);
            return;
        }
        
        Node *prev = getNode(index-1);
        if (!prev) return;
        
        Node *curr = new Node(val);
        Node *next = prev->next;
        
        curr->prev = prev;
        curr->next = next;
        
        prev->next = curr;
        if (next) next->prev = curr;
        
        return;
    }
    
    void deleteAtIndex(int index) {
        Node *curr = getNode(index);
        if (!curr) return;
        
        Node *prev = curr->prev;
        Node *next = curr->next;
        
        if (prev) prev->next = next;
        else head = next;
        
        if (next) next->prev = prev;
        
        return;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */