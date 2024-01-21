class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        
        if (n == 0) return 0;
        
        vector<int> dp(n,0);
        
        dp[0] = nums[0];
        
        for (int i = 1; i<n; i++){
            if (i==1){
                dp[i] = max(nums[0], nums[1]);
            }
            else{
                dp[i] = max(dp[i-1], dp[i-2]+nums[i]);
            }
        }
        
        return dp[n-1];
        
    }
};
        