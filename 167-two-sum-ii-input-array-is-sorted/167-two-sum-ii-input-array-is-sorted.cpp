class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size(), l = 0, r = n-1, sum = 0;
        vector<int> ans(2,0);
        
        while(l<=r){
            sum = nums[l]+nums[r];
            if (sum>target) r--;
            else if(sum<target) l++;
            else{
                ans[0] = l+1;
                ans[1] = r+1;
                break;
            }
        }
        return ans;
    
    }
};