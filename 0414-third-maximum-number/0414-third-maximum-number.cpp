class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> n;
        for (auto x: nums){
            n.insert(x);
            if (n.size()>3)
                n.erase(n.begin());
        }
        if (n.size() == 3) return *n.begin();
        else return *n.rbegin();
    }
};