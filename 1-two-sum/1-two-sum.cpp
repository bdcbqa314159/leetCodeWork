class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        unordered_map<int, int> umap;
        vector<int> ans(2,0);
        
        for (int i = 0; i<n; i++){
            int goal = target-nums[i];
            
            if (umap.find(goal) != umap.end()){
                ans[0] = umap[goal];
                ans[1] = i;
            }
            
            else{
                umap[nums[i]] = i; 
            }
        }
        
        return ans;
    }
};