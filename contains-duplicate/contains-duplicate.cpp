class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;
        for (int n: nums){
            if (umap[n] == 0) umap[n]++;
            else return true;
        }
        return false;
    }
};