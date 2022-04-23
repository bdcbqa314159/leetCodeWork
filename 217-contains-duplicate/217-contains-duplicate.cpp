class Solution {
public:
    unordered_map<int,int> helper(vector<int>& nums){
        unordered_map<int,int> u;
        for (int i = 0; i<nums.size(); i++){
            auto it = u.find(nums[i]);
            if (it == u.end()) u[nums[i]] = 1;
            else u[nums[i]]++;
        }
        return u;
    }
    
    bool containsDuplicate(vector<int>& nums) {
        auto u = helper(nums);
        auto it = nums.begin();
        for (it; it!=nums.end(); it++){
            if (u[*it]>1) return true;
        }
        return false;
    }
};