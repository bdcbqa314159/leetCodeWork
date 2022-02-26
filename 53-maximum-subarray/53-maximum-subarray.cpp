class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size(), maxSoFar = nums[0], currMax = nums[0];
        
        for (int i = 1; i<n; i++){
            currMax = max(currMax+nums[i], nums[i]);
            maxSoFar = max(currMax, maxSoFar);
        }
        return maxSoFar;
    }
};
