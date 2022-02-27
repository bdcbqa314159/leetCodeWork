class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currentMax = nums[0];
        int maxSoFar = nums[0];
        
        for (int i = 1; i<n;i++){
            currentMax = max(currentMax+nums[i], nums[i]);
            maxSoFar = max(currentMax, maxSoFar);
        }
        
        return maxSoFar;
    }
    
};