class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> z;
        for(auto n: nums){
            z.insert(n);
            if (z.size()>3)
                z.erase(z.begin());
        }
        if (z.size() == 3) return *z.begin();
        else return *z.rbegin();
    }
};