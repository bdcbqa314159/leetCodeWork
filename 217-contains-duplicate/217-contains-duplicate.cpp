class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;
        for (int &n: nums){
            if (umap.find(n) != umap.end())
                return true;
            else
                umap[n] = 1;
        }
        return false;
    }
};