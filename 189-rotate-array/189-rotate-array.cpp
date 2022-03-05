class Solution {
public:
    
    void helper(vector<int>& nums, int left, int right){
        while(left<=right){
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
    
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        
        helper(nums, 0, n-1);
        helper(nums, 0, k-1);
        helper(nums, k, n-1);
        
    }
};