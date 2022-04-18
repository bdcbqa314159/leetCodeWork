class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        for (int i = 0; i<nums.size(); i++){
            int s = target-nums[i];
            if (umap.find(s) != umap.end())
                return {umap[s], i};
            umap[nums[i]] = i;
        }
        return {};
    }
};