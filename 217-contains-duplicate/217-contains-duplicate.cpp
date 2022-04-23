class Solution {
public:
    
    unordered_map<int,int> helper(vector<int>& nums){
        unordered_map<int,int> umap;
        for (int i = 0; i<nums.size(); i++){
            auto it = umap.find(nums[i]);
            if (it == umap.end()) umap[nums[i]] = 1;
            else umap[nums[i]]++;
        }return umap;
    }
    
    bool containsDuplicate(vector<int>& nums) {
        auto out = helper(nums);
        auto it = nums.begin();
        
        for (it; it != nums.end(); it++){
            if (out[*it]>1) return true;
        }
        return false;
    }
};