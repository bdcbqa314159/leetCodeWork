class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n = triangle.size();
        
        vector<int> dp(n+1,0);
        
        for (int i = n-1; i>=0; i--){
            int m = triangle[i].size();
            
            for (int j = 0;j<m; j++){
                dp[j] = triangle[i][j]+min(dp[j],dp[j+1]);
            }
        }
        
        return dp[0];
    }
};