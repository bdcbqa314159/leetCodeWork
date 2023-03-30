class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size(), ans = INT_MIN, idx = 0;
        
        for (int i = 0; i<n; i++){
            if (nums[i]>ans){
                idx = i;
                ans = nums[i];
            }
        }
        
        for (int i = 0; i<n; i++){
            if (ans != nums[i] && ans<2*nums[i]) return -1;
        }
        
        return idx;
    }
};