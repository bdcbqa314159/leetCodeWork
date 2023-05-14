class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> umap;
        for (int i = 0; i<n; i++){
            int diff = target-nums[i];
            if (umap.find(diff)==umap.end())
                umap[nums[i]] = i;
            else return {i, umap[diff]};
        }
        return {};
    }
};