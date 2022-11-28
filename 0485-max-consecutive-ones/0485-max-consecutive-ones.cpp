class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0, curr = 0, ans = 0, n = nums.size();
        while (i<n){
            
            if (nums[i] == 1){
                curr++;
                ans = max(ans, curr);
            }
            
            else curr = 0;
            
            i++;
        }
        return ans;
    }
};