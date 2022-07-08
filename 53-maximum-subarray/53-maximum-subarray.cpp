class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current, global, n = nums.size();
        current=global = nums[0];
        
        for (int i = 1; i<n; i++){
            current = max(current+nums[i], nums[i]);
            global = max(current, global);
        }
        
        return global;
    }
};