class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int left = 0, right = nums.size()-1, medium = 0;
        
        while(left<=right){
            medium = left+(right-left)/2;
            
            if (nums[medium] == target){
                return medium;
            }
            
            else if (nums[medium]<target) left = medium+1;
            else right = medium-1;
        }
        
        return -1;
        
    }
};