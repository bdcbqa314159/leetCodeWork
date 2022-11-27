class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> set_;
        for (auto n: nums){
            set_.insert(n);
            if (set_.size()>3)
                set_.erase(set_.begin());
        }
        if (set_.size() == 3)
            return *set_.begin();
        else
            return *set_.rbegin();
    }
};