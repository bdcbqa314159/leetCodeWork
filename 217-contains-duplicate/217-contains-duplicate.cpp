class Solution {
public:
    
    unordered_map<int, int> helper(vector<int>& nums){
        unordered_map<int,int> out;
        auto it = nums.begin();
        for (it; it!= nums.end(); it++){
            auto it1 = out.find(*it);
            if (it1 == out.end()) out[*it] = 1;
            else out[*it]++;
        }
        return out;
    }
    
    bool containsDuplicate(vector<int>& nums) {
        auto out = helper(nums);
        auto it = nums.begin();
        for (it ; it != nums.end(); it++)
            if (out[*it] > 1) return true;
        return false;
    }
};