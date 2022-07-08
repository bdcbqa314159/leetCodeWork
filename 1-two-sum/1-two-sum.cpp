class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(), i = 0, diff = 0;
        unordered_map<int,int> umap;
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