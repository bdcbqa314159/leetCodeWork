class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int goal{};
        int n = nums.size();
        
        vector<int> ans(2,0);
        
        unordered_map<int, int> umap;
        
        for (int i = 0; i<n; i++){
            goal = target-nums[i];
            
            if (umap.find(goal) != umap.end()){
                ans[0] = umap[goal];
                ans[1] = i;
            }
            
            
            umap[nums[i]] = i;  
        }
        return ans;
        
    }
};

