class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        
        int maxNow = nums[0], maxSoFar = nums[0];
        
        for (int i = 1; i<n; i++){
            maxNow = max(maxNow+nums[i], nums[i]);
            maxSoFar = max(maxSoFar, maxNow);
        }
        
        return maxSoFar;
        
    }
};