class Solution {
public:
    
    unordered_map<int, int> helper(vector<int>& nums){
        unordered_map<int, int> out;
        for (int i = 0; i<nums.size(); i++){
            auto it = out.find(nums[i]);
            if (it == out.end()) out[nums[i]] = 1;
            else out[nums[i]]++;
        }
        return out;
    }
    
    
    bool containsDuplicate(vector<int>& nums) {
        auto umap = helper(nums);
        auto it = nums.begin();
        for (it; it != nums.end(); ++it){
            if (umap[*it] > 1) return true;
        }
        return false;
    }
};