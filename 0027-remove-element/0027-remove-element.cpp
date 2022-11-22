class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int position = 0;
        for (int n:nums){
            if (n!=val){
                nums[position] = n;
                position++;
            }
        }
        return position;
    }
};