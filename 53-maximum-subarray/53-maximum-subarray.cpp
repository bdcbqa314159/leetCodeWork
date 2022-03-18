class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxCurrent = nums[0], maxSoFar = nums[0];
        
        for (int i = 1; i<nums.size(); i++){
            maxCurrent = max(maxCurrent+nums[i], nums[i]);
            maxSoFar = max(maxSoFar, maxCurrent);
        }
        
        return maxSoFar;
        
        
        
    }
};