class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cur = 0, ans = 0;
        for (int i = 0; i<nums.size(); i++){
            if (nums[i] == 1){
                cur++;
                ans = max(ans,cur);
            }
            else
                cur = 0;
        }
        return ans;
    }
};