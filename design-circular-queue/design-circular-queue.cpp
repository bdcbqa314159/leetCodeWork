class MyCircularQueue {
public:
    vector<int> vec;
    int head, tail, size, capacity;
    
    MyCircularQueue(int k) {
        
        vec.resize(k,0);
        capacity = k;
        head = 0;
        tail = -1;
        size = 0;
        
    }
    
    bool enQueue(int value) {
        if (size == capacity) return false;
        tail = (tail+1)%capacity;
        vec[tail] = value;
        size++;
        return true;
    }
    
    bool deQueue() {
        if (size == 0) return false;
        head = (head+1)%capacity;
        size--;
        return true;
    }
    
    int Front() {
        if (size == 0) return -1;
        return vec[head];
    }
    
    int Rear() {
        if (size == 0) return -1;
        return vec[tail];
    }
    
    bool isEmpty() {
        return (size == 0);
    }
    
    bool isFull() {
        return size == capacity;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */