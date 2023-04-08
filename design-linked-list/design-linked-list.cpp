class Node{
    public:
    int val;
    Node *prev, *next;
    Node(int val):val(val), prev(nullptr), next(nullptr){}
};


class MyLinkedList {
public:
    
    Node* head = nullptr;
    
    MyLinkedList() {
        
    }
    
    Node *getNode(int index){
        Node *temp = head;
        for (int i = 0; i<index && temp; ++i)
            temp = temp->next;
        return temp;
    }
    
    Node *getTail(){
        Node *temp = head;
        while (temp && temp->next)
            temp = temp->next;
        return temp;
    }
    
    int get(int index) {
        Node *temp = getNode(index);
        return temp == nullptr? -1: temp->val;
    }
    
    void addAtHead(int val) {
        Node *temp = new Node(val);
        temp->next = head;
        if (head)
            head->prev = temp;
        head = temp;
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