class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int j = 0;
        
        for (int num: nums){
            if(num!=0){
                nums[j] = num;
                j++;
            }
        }
        
        for (int i = j; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};

