class TwoSum {
public:
    
    unordered_multiset<int> nums;
    
    TwoSum() {
        
    }
    
    void add(int number) {
        nums.insert(number);
    }
    
    bool find(int value) {
        for (unsigned int i: nums){
            unsigned int diff = value-i;
            
            int count = i == diff ? 1:0;
            if (nums.count(value-i)>count)
                return true;
        }
        return false;
    }
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */