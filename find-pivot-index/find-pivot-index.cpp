class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size(), left = 0;
        int total = accumulate(nums.begin(), nums.end(), 0);
        
        for (int i = 0; i<n; i++){
            if (left == total - left - nums[i]) return i;
            left += nums[i];
        }
        return -1;
    }
};