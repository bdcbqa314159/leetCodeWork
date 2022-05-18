class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cur = 0, ans = 0;
        int l = 0, r = 0;
        while (l<nums.size()){
            
            if (nums[l]==1){
                cur++;ans = max(ans,cur);
            }
            else cur = 0;
            
            l++;
        }
        return ans;
    }
};