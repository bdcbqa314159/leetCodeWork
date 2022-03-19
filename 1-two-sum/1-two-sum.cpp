class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans(2,0);
        int goal;
        unordered_map<int,int> umap;
        
        for (int i = 0; i<nums.size(); i++){
            goal = target-nums[i];
            
            if (umap.find(goal)!=umap.end()){
                ans[0] = umap[goal];
                ans[1] = i;
            }
            
            else
                umap[nums[i]] = i;
        }
        
        return ans;
    }
};