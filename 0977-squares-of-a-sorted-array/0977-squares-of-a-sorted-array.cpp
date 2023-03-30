class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size(), l = 0, r = n-1;
        int a = 0, b = 0, last = r;
        vector<int> ans(n);
        
        while (l<=r){
            a = nums[l]*nums[l];
            b = nums[r]*nums[r];
            
            if (a<b){
                ans[last] = b; r--;
            }
            
            else{
                ans[last] = a; l++;
            }
            last--;
        }
        return ans;
    }
};