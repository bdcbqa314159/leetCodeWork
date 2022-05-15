class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        int goal = 0;
        for (int i = 0; i<nums.size(); i++){
            goal = target-nums[i];
            if (umap.find(goal) != umap.end())
                return {i, umap[goal]};
            else
                umap[nums[i]] = i;
        }
        return {}; //Never reach this point as there is always a solution.
    }
};