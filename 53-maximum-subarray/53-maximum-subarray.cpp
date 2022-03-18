class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxTemp = nums[0], maxFinal = nums[0];
        
        for (int i = 1; i<nums.size(); i++){
            maxTemp = max(nums[i], maxTemp+nums[i]);
            maxFinal = max(maxTemp, maxFinal);
        }
        
        
        return maxFinal;
        
        
    }
};