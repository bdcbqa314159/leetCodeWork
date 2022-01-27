class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> umap{};
        
        for (const auto& num: nums){
            
            if (umap.find(num) == umap.end()){
                umap[num] = 1;
            }
            
            else
                return true;
        }
        
        return false;
        
    }
};