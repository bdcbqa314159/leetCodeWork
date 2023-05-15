class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> u;
        for (int n: nums){
            if (u.count(n)>0) return true;
            u.insert(n);
        }return false;
    }
};