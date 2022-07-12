class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), curMax = nums[0], ans = nums[0];
        for (int i = 1; i<n; i++){
            curMax = max(nums[i], curMax+nums[i]);
            ans = max(curMax, ans);
        }
        return ans;
    }
};