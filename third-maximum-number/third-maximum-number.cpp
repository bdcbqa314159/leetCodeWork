class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> mySet;
        for (auto num: nums){
            mySet.insert(num);
            if (mySet.size()>3){
                mySet.erase(mySet.begin());
            }
        }
        if (mySet.size() == 3){
            return *mySet.begin();
        }
        else return *mySet.rbegin();
    }
};