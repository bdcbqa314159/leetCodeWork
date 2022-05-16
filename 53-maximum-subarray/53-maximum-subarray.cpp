class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = nums[0], M = nums[0];
        for (int i = 1; i<nums.size(); i++){
            m = max(nums[i], m+nums[i]);
            M = max(m, M);
        }return M;
    }
};