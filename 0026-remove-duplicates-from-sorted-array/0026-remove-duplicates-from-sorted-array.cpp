class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int position = 0, n = nums.size();
        for (int i = 0; i<n; i++){
            if (position == 0 || nums[i] > nums[position-1]){
                nums[position] = nums[i];
                position++;
            }
        }
        return position;
    }
};