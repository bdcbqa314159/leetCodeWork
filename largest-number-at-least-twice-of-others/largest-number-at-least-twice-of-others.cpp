class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ans = INT_MIN, idx = 0;
        for (int i = 0; i<nums.size(); i++){
            if (nums[i]>ans){
                idx = i;
                ans = nums[i];
            }
        }
        
        for (int i = 0; i<nums.size(); i++){
            if (ans != nums[i] && ans < nums[i]*2)
                return -1;
        }
        return idx;
    }
};