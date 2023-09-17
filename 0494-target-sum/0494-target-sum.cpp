class Solution {
public:
    
    int dp(vector<int>& nums, int target, int idx, map<pair<int,int>, int>& memo){
        if (idx == nums.size()) return target == 0;
        if (memo.count({idx, target})) return memo[{idx, target}];
        int pos = dp(nums, target+nums[idx], idx+1, memo);
        int neg = dp(nums, target-nums[idx], idx+1, memo);
        return memo[{idx, target}] = pos+neg;
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        map<pair<int,int>, int>memo;
        return dp(nums, target, 0, memo);
        
    }
};