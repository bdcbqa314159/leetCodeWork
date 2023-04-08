class Node {
    public:
    int val;
    Node *next, *prev;
    Node(int x) : val(x), next(NULL), prev(NULL) {}
};



class MyLinkedList {
public:
    Node* head = nullptr;
    
    MyLinkedList() {
        
    }
    
    Node* getNode(int index){
        Node *curr = head;
        for (int i = 0; i<index && curr; ++i)
            curr = curr->next;
        return curr;
    }
    
    Node* getTail(){
        Node *curr = head;
        while (curr && curr->next)
            curr = curr->next;
        return curr;
    }
    
    int get(int index) {
        Node* curr = getNode(index);
        return curr == nullptr? -1: curr->val;
    }
    
    void addAtHead(int val) {
        Node *curr = new Node(val);
        curr->next = head;
        
        if (head){
            head->prev = curr;
        }
        head = curr;
        return;
    }
    
    void addAtTail(int val) {
        if (!head){
            addAtHead(val);
            return;
        }
        
        Node *prev = getTail();
        Node *curr = new Node(val);
        prev->next = curr;
        curr->prev = prev;
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