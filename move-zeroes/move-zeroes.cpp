class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int position = 0, n = nums.size();
        
        for (int i = 0; i<n; i++){
            if (nums[i]!=0){
                nums[position] = nums[i];
                position++;
            }
        }
        
        for (int i = position; i<n; i++)
            nums[i] = 0;
        return;
    }
};