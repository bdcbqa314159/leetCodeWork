class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n = nums.size()-1;
        
        if (target<nums[0]) return 0;
        if (target>nums[n]) return n+1;
        
        int left = 0;
        int right = n;
        
        while(left<=right){
            int mid = left + (right-left)/2;
            
            if (nums[mid]==target) return mid;
            
            else if (nums[mid]<target) left = mid+1;
            
            else right = mid-1;
        }
        
        return left;
        
    }
};