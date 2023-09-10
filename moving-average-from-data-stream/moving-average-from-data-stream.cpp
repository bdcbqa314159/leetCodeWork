class MovingAverage {
public:
    queue<double> numList;
    double number = 0, sum = 0;
    int window;
    
    MovingAverage(int size) {
        window = size;
    }
    
    double next(int val) {
        numList.push(val);
        sum+=val;
        number++;
        if(number>window){
            sum-=numList.front();
            numList.pop();
            number = window;
        }
        return sum/number;
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */