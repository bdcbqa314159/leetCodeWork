class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0, n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i<n; i++){
            if (i%2 == 0) sum+=nums[i];
        }
        return sum;
    }
};