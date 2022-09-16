class Solution {
public:
    
    vector<vector<int>> dp;
    int solve(vector<int>& nums, vector<int>& multipliers, int l, int r, int index){
        int n = nums.size();
        int m = multipliers.size();
        if (index >= m) return 0;
        
        if (dp[index][l]!=-1) return dp[index][l];
        
        int x = multipliers[index];
        
        return dp[index][l] = max(nums[l]*x+solve(nums, multipliers, l+1, r , index+1), nums[r]*x+solve(nums, multipliers, l ,r-1, index+1));
    }
    
    
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n = nums.size();
        int m = multipliers.size();
        vector<vector<int>> dp(m+1, vector<int>(m+1));
        
        for (int k = 1; k<=m; k++){
            for (int i = 0, j = k-i; i<=k;++i,--j){
                dp[i][j] = max((i?dp[i-1][j] + nums[i-1]*multipliers[k-1]:INT_MIN),
                              (j?dp[i][j-1] + nums[n-j]*multipliers[k-1]:INT_MIN));
            }
        }
        int ans = INT_MIN;
        for (int i = 0; i<=m; i++)
            ans = max(ans, dp[i][m-i]);
        
        return ans;
    }
};