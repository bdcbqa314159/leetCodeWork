class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        
        if (n < 3) return n;
        
        int i = 1;
        int j = 2;
        
        while(j<n){
            if (!(nums[j] == nums[i] && nums[j] == nums[i-1])){
                i++;
                swap(nums[i], nums[j]);
            }
            j++;
        }
        
        return i+1;
        
    }
};