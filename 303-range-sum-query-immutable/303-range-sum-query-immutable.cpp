class NumArray {
public:
    
    vector<int> &nums;
    
    NumArray(vector<int>& nums): nums(nums){
        
    }
    
    int sumRange(int left, int right) {
        int result = nums[left];
        for (int i = 1; i<=right-left; i++)
            result+=nums[left+i];
        return result;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */