class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans(2,0);
        unordered_map<int,int> umap;
        int n = nums.size();
        
        for (int i = 0; i<n; i++){
            int goal = target-nums[i];
            
            if (umap.find(goal)!=umap.end()){
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