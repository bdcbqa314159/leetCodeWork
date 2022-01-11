class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> umap;
        
        vector<int> ans(2);
        
        int n = nums.size();
        int goal = 0;
        
        for (int i = 0; i<n; i++){
            goal = target-nums[i];
            
            if (umap.find(goal) != umap.end()){
                ans[0] = umap[goal];
                ans[1] = i;
                return ans;
            }
            
            umap[nums[i]] = i;
            
        }
        
        return ans;
        
    }
};

