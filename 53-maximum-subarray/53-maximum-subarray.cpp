class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxGlobal = nums[0], maxLocal = nums[0];
        
        for (int i = 1; i<nums.size(); i++){
            maxLocal = max(maxLocal+nums[i], nums[i]);
            maxGlobal = max(maxLocal, maxGlobal);
        }
        
        return maxGlobal;
        
    }
};