class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int index = 0, current = 0, ans = 0, n = nums.size();
        
        while (index<n){
            if (nums[index] == 1){
                current++;
                ans = max(ans, current);
            }
            else{
                current = 0;
            }
            index++;
        }
        
        return ans;
    }
};