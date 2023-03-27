class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0, sum = 0, len=INT_MAX;
        nums.push_back(1);
        int n = nums.size();
        while (j<nums.size()){
            
            if (sum>=target){
                len = min(len, j-i);
                sum -= nums[i];
                i++;
            }
            
            else{
                sum += nums[j];
                j++;
            }
            
            
        }
        return len == INT_MAX?0:len;
    }
};