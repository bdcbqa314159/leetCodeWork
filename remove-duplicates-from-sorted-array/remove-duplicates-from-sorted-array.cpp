class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), position = 0;
        
        for (int i = 0; i<n; i++){
            if (position == 0 || nums[i]> nums[position-1]){
                nums[position] = nums[i];
                position++;
            }
        }
        return position;
    }
};