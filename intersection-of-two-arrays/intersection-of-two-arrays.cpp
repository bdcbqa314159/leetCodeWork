class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> a,b;
        vector<int> v;
        for (auto n: nums1)
            a.insert(n);
        for (auto n: nums2)
            b.insert(n);
        
        auto it = a.begin();
        for (it; it!=a.end(); it++){
            if (b.find(*it) != b.end())
                v.push_back(*it);
        }
        return v;
    }
};