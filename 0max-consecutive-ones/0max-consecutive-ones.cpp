class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(), ans = 0, i = 0, curr = 0;
        while (i<n){
            
            if (nums[i] == 1){
                curr++;
                ans = max(ans,curr);
            }
            
            else curr = 0;
            i++;
        }return ans;
    }
};