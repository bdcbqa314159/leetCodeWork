class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size(), max1 = -1, max2 = -1, idx = -1;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] > max1) {
                max2 = max1;
                max1 = nums[i];
                idx = i;
            }
            else if (nums[i] > max2) {
                max2 = nums[i];
            }
        }
        
        if (max1 >= 2 * max2) {
            return idx;
        }
        else {
            return -1;
        }
    }
    
};