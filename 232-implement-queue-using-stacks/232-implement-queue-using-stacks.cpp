class MyQueue {

public:
    
    int nextI, firstI, size, capacity, *arr;
    
    MyQueue(): nextI(0), firstI(-1), size(0), capacity(5){
        arr = new int[2*capacity];
    }
    
    bool empty(){
        return (size==0);
    }
    
    int peek(){
        if (empty()){
            cout<<"empty"<<endl;
            return INT_MIN;
        }
        
        return arr[firstI];
    }
    
    int pop(){
        if (empty()){
            cout<<"empty"<<endl;
            return INT_MIN;
        }
        
        int ans = arr[firstI];
        arr[firstI] = 0;
        firstI = (firstI+1)%capacity;
        size--;
        if (size==0){
            firstI = -1;
            nextI = 0;
        }
        return ans;
    }
    
    void push(int x){
        if (size == capacity){
            int *newArr = new int[2*capacity];
            for(int i = 0; i<capacity; i++)
                newArr[i] = arr[i];
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
    

};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */