class Solution {
public:
    // TIME COMPLEXITY:- O(N*5)
    // SPACE COMPLEXITY:- O(N*5)
    // Note:- You can easily optimise the space to O(1)
    #define MOD 1000000007
    int countVowelPermutation(int n) {
        vector<vector<int>> dp(n,vector<int>(5,0));
        for(int i=0;i<5;i++)
            dp[n-1][i] = 1;
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<5;j++){
                if(j==0) // 'a'
                    dp[i][0] = dp[i+1][1];
                else if(j==1) // 'e'
                    dp[i][1] = (dp[i+1][0]+dp[i+1][2])%MOD;
                else if(j==2){
                    dp[i][2] = (dp[i+1][0]+dp[i][2])%MOD;
                    dp[i][2] = (dp[i+1][1]+dp[i][2])%MOD;
                    dp[i][2] = (dp[i+1][3]+dp[i][2])%MOD;
                    dp[i][2] = (dp[i+1][4]+dp[i][2])%MOD;
                }
                else if(j==3)
                    dp[i][3] = (dp[i+1][2]+dp[i+1][4])%MOD;
                else
                    dp[i][4] = dp[i+1][0];
            }
        }
        int ans = 0;
        for(int i=0;i<5;i++)
            ans = (ans+dp[0][i])%MOD;
        return ans;
    }
};