class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size(), l = 0, r = n-1, last = n-1, a = 0, b = 0;
        vector<int> result(n,0);
        
        while (l<=r){
            a = nums[l]*nums[l];
            b = nums[r]*nums[r];
            
            if (a>b){
                result[last] = a;
                l++;
                last--;
            }
            else{
                result[last] = b;
                r--;
                last--;
            }
        }
        return result;
    }
};