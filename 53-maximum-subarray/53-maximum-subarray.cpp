class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int local = nums[0], max_ = nums[0];
        for (int i = 1; i<nums.size(); i++){
            local = max(local+nums[i], nums[i]);
            max_ = max(max_, local);
        }
        return max_;
    }
};