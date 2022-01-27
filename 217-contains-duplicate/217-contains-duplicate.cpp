class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> umap;
        
        for (const int& num: nums){
            if (umap.count(num) == 0)
                umap[num] = 1;
            else
                return true;
        }
        
        return false;
        
    }
};