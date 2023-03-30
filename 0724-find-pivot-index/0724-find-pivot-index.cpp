class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size(), total = 0, left = 0;
        for (int x : nums) total+=x;
        for (int i = 0; i<n; i++){
            if (i != 0) left += nums[i-1];
            if (total - nums[i] == 2*left) return i;
        }
        
        return -1;
    }
};