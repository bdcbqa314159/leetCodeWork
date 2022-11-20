class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int k{};
        for (int i = 0; i <n; i++)
            if (nums[i] == val){
                nums[i] = -1;k++;
            }
        
        int j = 0;
        for (int i = 0; i<n; i++){
            if (nums[i]!=-1){
                nums[j] = nums[i];
                j++;
            }
        }
        for (int i = j; i<n; i++)
            nums[i] = -1;
        
        return n-k;
        
    }
};