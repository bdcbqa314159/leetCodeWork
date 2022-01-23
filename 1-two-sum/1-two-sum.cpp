class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> umap;
        
        vector<int> answer(2,0);
        
        int n =  nums.size(), goal{};
        
        for (int i =0; i<n; i++){
            goal = target-nums[i];
            if (umap.find(goal) != umap.end()){
                
                answer[0] = umap[goal];
                answer[1] = i;
                
            }
            
            umap[nums[i]] = i;
        }
        
        return answer;
        
    }
};