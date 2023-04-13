class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        for (int n: nums){
            if (uset.count(n)>0) return true;
            uset.insert(n);
        }
        return false;
    }
};