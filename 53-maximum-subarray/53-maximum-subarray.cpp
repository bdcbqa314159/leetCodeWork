class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int currMax = nums[0], maxSoFar = nums[0];
        
        int n = nums.size();
        
        for (int i = 1; i<n; i++){
            currMax = max(currMax+nums[i], nums[i]);
            maxSoFar = max(maxSoFar, currMax);
        }
        
        return maxSoFar;
        
    }
};