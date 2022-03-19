class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int goal;
        vector<int> ans;
        unordered_map<int,int> umap;
        
        for (int i= 0; i<nums.size(); i++){
            goal = target-nums[i];
            if (umap.find(goal)!=umap.end()){
                ans.push_back(umap[goal]);
                ans.push_back(i);
            }
            else
                umap[nums[i]] = i;
        }
        
        return ans;
        
        
        
    }
};