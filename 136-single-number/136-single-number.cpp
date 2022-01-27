class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int result{};
        
        for (int i = 0; i<nums.size(); i++){
            result ^= nums[i];
        }
        
        return result;
        
    }
};