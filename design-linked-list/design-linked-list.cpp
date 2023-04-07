class Node{
    public:
    int val{0};
    Node* next{nullptr};
    
    Node(){}
    Node(int val):val(val), next(nullptr){}
};


class MyLinkedList {
public:
    int size{0};
    Node* head = new Node(0);
    
    MyLinkedList() {
        
    }
    
    int get(int index) {
        if (index<0 || index>=size) return -1;
        Node* temp = head->next;
        for (int i =0; i<index; i++) temp = temp->next;
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* temp = head->next;
        head->next = new Node(val);
        head->next->next = temp;
        size++;
        return;
    }
    
    void addAtTail(int val) {
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = new Node(val);
        size++;
        return;
    }
    
    void addAtIndex(int index, int val) {
        if (index<0 || index > size) return;
        Node* temp = head;
        for (int i = 0; i<index; i++) temp = temp->next;
        Node* temp1 = temp->next;
        temp->next = new Node(val);
        temp->next->next = temp1;
        size++;
        return;
    }
    
    void deleteAtIndex(int index) {
        if (index<0 || index>=size) return;
        Node* temp = head;
        for (int i = 0; i<index; i++) temp = temp->next;
        Node* temp1 = temp->next;
        temp->next = temp1->next;
        temp1->next = nullptr;
        size--;
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