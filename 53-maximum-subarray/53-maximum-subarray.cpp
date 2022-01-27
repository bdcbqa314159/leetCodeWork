class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        int localMax = nums[0];
        int globalMax = nums[0];
        
        for (int i = 1; i<n; i++){
            localMax = max(nums[i], localMax+nums[i]);
            globalMax = max(localMax, globalMax);
        }
        
        return globalMax;
        
    }
};