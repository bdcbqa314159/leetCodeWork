class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> u;
        for (int i = 0; i<n; i++){
            int x = nums[i];
            if (u.find(x)!=u.end() && i-u[x]<=k)
                return true;
            u[x] = i;
        }return false;
    }
};