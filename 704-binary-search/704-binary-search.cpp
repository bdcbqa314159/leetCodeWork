class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int left = 0, right = nums.size()-1, med = 0;
        
        while(left<=right){
            
            med = left + (right-left)/2;
            
            if (nums[med] == target) return med;
            else if (nums[med]<target) left = med+1;
            else right = med-1;
            
        }
        
        return -1;
    }
};