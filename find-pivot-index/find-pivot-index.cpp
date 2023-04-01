class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0, left = 0, n = nums.size();
        total = accumulate(nums.begin(), nums.end(), 0);
        
        for (int i = 0; i<n; i++){
            if (left == total - left -nums[i]) return i;
            left += nums[i];
        }
        return -1;
    }
};