class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int result = 0;
        int currSum = 0;
        
        unordered_map<int,int> umap;
        umap[0] = 1;
        
        for (const auto& num:nums){
            currSum += num;
            int diff = currSum -k;
            
            if (umap.find(diff) != umap.end())
                result += umap[diff];
            if (umap.find(currSum) != umap.end())
                umap[currSum] += 1;
            else
                umap[currSum]++;
        }
        
        return result;
        
    }
};