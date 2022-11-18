class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0, n = nums.size();
        for (int i = 0; i<n; i++)
            total+=nums[i];
        
        int left = 0;
        for (int i = 0; i<n; i++){
            if (i!=0) left += nums[i-1];
            if (total  - nums[i] == 2*left)
                return i;
        }
        return -1;
    }
};