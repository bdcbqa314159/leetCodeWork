class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), m = nums[0], M = nums[0];
        for (int i = 1; i<n; i++){
            m = max(m+nums[i], nums[i]);
            M = max(m, M);
        }
        return M;
    }
};