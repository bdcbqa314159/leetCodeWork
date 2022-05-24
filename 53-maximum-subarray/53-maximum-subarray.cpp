class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxCurrent = nums[0], maxTotal = nums[0];
        for (int i =1; i<nums.size(); i++){
            maxCurrent = max(nums[i], nums[i]+maxCurrent);
            maxTotal = max(maxTotal, maxCurrent);
        }return maxTotal;
    }
};