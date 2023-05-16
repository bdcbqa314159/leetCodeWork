class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> a,b;
        vector<int> v;
        
        for (auto n: nums1) a.insert(n);
        for (auto n: nums2) b.insert(n);
        
        for (auto x: a){
            if (b.find(x)!=b.end())
                v.push_back(x);
        }
        return v;
    }
};