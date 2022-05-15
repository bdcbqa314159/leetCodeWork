class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, goal;
        unordered_map<int,int> umap;
        for (i = 0; i<nums.size(); i++){
            goal = target-nums[i];
            if (umap.find(goal) != umap.end()) break;
            else umap[nums[i]] = i;
        }
        return {i, umap[goal]};
    }
};