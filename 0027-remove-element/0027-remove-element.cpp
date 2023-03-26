class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int position = 0;
        for (auto n: nums){
            if (n!=val){
                nums[position] = n;
                position++;
            }
        }
        return position;
    }
};