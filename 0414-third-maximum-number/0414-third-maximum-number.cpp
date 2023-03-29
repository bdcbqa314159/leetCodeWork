class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> z;
        
        for (int n: nums){
            z.insert(n);
            
            if (z.size() > 3) z.erase(z.begin());
            
        }
        
        return z.size() == 3 ? *z.begin(): *z.rbegin();
    }
};