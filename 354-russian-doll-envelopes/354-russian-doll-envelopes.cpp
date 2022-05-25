class Solution {
public:

    int LIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp;
        dp.push_back(nums[0]);
        
        for(int i=1; i<n; ++i){
            if (dp.back() <nums[i]){
                dp.push_back(nums[i]);
            }
            else{
                int k = lower_bound(dp.begin(), dp.end(), nums[i]) - dp.begin();
                dp[k] = nums[i];
            }            
        }
        return dp.size();
    }
    
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(), 
             [](const vector<int>& e1, const vector<int>& e2)->bool {
            return (e1[0]>e2[0]) or (e1[0]==e2[0] and e1[1]<e2[1]);
        });
        
        int n = envelopes.size();
        vector<int> Heights(n, 0);
        for(int i=0; i<n; ++i)
            Heights[i] = -1*envelopes[i][1];
        
        return LIS(Heights);
    }
};