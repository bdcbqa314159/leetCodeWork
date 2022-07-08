class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentMax = nums[0], globalMax = nums[0], n = nums.size();
        for (int i = 1; i<n; i++){
            currentMax = max(currentMax+nums[i], nums[i]);
            globalMax = max(globalMax, currentMax);
        }
        
        return globalMax;
    }
};