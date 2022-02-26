class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2,0);
        int n = nums.size();
        int goal{};
        
        unordered_map<int, int> umap;
        
        for (int i = 0; i<n; i++){
            goal = target-nums[i];
            
            if (umap.find(goal)!= umap.end()){
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

