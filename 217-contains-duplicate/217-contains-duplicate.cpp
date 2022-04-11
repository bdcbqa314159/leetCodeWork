class Solution {
public:
    
    unordered_map<int, int> helper(vector<int>& nums){
        unordered_map<int, int> umap{};
        for (int i = 0; i<nums.size(); i++){
            if (umap.find(nums[i]) == umap.end())
                umap[nums[i]] = 1;
            else umap[nums[i]]++;
        }
        return umap;
    }
    
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> u = helper(nums);
        for (int i = 0; i<nums.size(); i++){
            if (u[nums[i]] >1) return true;
        }
        return false;
    }
};