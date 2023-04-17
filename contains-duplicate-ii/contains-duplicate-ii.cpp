class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size(), x = 0;
        unordered_map<int,int> m;
        for (int i = 0; i<n; i++){
            x = nums[i];
            if (m.find(x) != m.end() && i-m[x]<=k)
                return true;
            m[x] = i;
        }
        return false;
    }
};