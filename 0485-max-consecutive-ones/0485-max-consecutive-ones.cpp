class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int index = 0, curr = 0, ans = 0, n = nums.size();
        
        while (index < n){
            if (nums[index] == 1){
                curr++;
                ans = max(ans, curr);
            }
            else{
                curr = 0;
            }
            index++;
        }
        
        return ans;
    }
};