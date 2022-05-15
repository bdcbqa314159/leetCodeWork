class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        for (int i = 0; i<nums.size(); i++){
            int goal = target-nums[i];
            if (umap.find(goal) != umap.end())
                return {i, umap[goal]};
            else
                umap[nums[i]] = i;
        }
        return {};
    }
};