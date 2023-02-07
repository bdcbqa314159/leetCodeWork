class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(2*n);
        for (int i = 0; i<2*n; i++)
            result[i] = i%2 == 0 ? nums[i/2]:nums[n+i/2];
        return result;
    }
};