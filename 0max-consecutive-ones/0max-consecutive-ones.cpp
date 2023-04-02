class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(), curr = 0, ans = 0, i = 0;
        while (i<n){
            
            if (nums[i] == 1){
                curr++;
                ans = max(curr, ans);
            }
            
            else curr = 0;
            
            i++;
        }
        return ans;
    }
};