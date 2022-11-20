class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int i{}, j{}, sum{};
        int len(INT_MAX);
        nums.push_back(-1);
        
        while(j<nums.size()){
            if (sum>=s){
                len = min(len, j-i);
                sum -= nums[i];
                i++;
            }
            else{
                sum += nums[j];
                j++;
            }
        }
        
        return (len == INT_MAX) ? 0 : len;
    }
};