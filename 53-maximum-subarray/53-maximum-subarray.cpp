class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        int maxSoFar = nums[0];
        int currMax = nums[0];
        
        for (int i = 1; i<n; i++){
            
            currMax = max(currMax+nums[i], nums[i]);
            maxSoFar = max(currMax, maxSoFar);
        }
        
        return maxSoFar;
    }
};

 