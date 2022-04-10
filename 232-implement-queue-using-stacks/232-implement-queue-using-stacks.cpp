class MyQueue {
public:
    
    int firstI, nextI, size, capacity, *arr;
    
    MyQueue(): firstI(-1), nextI(0), size(0), capacity(5) {
        
        arr = new int[2*capacity];
        
    }
    
    void push(int x) {
        if (size == capacity){
            int *newArr = new int[2*capacity];
            for (int i = 0; i<capacity; i++){
                newArr[i] = arr[i];
            }
            nextI = capacity;
            capacity*=2;
            delete []arr;
            arr = newArr;
        }
        
        arr[nextI] = x;
        nextI = (nextI+1)%capacity;
        if (firstI == -1) firstI = 0;
        size++;
    }
    
    int pop() {
        
        if (empty()) return INT_MIN;
        
        int ans = arr[firstI];
        arr[firstI] = 0;
        firstI = (firstI+1)%capacity;
        size--;
        if (size == 0){
            firstI = -1;
            nextI = 0;
        }
        return ans;
    }
    
    int peek() {
        if (empty()) return INT_MIN;
        return arr[firstI];
    }
    
    bool empty() {
        return size==0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */