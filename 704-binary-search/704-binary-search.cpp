class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int s = 0;
        int e = nums.size()-1;
        
        while(s<=e){
            int med = s+(e-s)/2;
            if (nums[med] == target){
                return med;
            }
            
            else if(target<nums[med]){
                e = med-1;
            }
            
            else{
                s = med+1;
            }
        }
        
        return -1;
    }
};