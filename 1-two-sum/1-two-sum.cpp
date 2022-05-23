class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int goal;
        unordered_map<int,int> umap;
        for (int i = 0; i<nums.size(); i++){
            if (umap.find(nums[i]) != umap.end())
                return {i, umap[nums[i]]};
            else umap[target-nums[i]] = i;
        }return {};
    }
};