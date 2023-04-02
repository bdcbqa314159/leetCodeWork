class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0, n = nums.size(), len = INT_MAX, sum = 0;
        while (j<n){
            sum+=nums[j]; j++;
            
            while (sum>=target){
                len = min(len, j-i);
                sum-=nums[i];
                i++;
            }
        }
        return len==INT_MAX? 0: len;
    }
};