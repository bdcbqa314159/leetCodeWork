class Solution {
public:
    
    void helper(vector<int>& nums, int l , int r){
        while (l<=r){
            swap(nums[l], nums[r]);
            l++; r--;
        }
        return;
    }
    
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k%=n;
        helper(nums, 0, n-1);
        helper(nums, 0, k-1);
        helper(nums, k, n-1);
        return;
    }
    
};