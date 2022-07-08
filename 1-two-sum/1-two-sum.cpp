class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        int i = 0, diff = 0, n = nums.size();
        for (i = 0; i<n; i++){
            diff = target-nums[i];
            if (umap.find(diff)!=umap.end())
                break;
            else
                umap[nums[i]] = i;
        }
        return {i,umap[diff]};
    }
};