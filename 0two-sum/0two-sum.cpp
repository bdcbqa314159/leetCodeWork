class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        int n = nums.size(), i = 0, diff = 0;
        for (i; i<n; i++){
            diff = target - nums[i];
            if (umap.find(diff) == umap.end())
                umap[nums[i]] = i;
            else break;
        }
        return {i, umap[diff]};
    }
};