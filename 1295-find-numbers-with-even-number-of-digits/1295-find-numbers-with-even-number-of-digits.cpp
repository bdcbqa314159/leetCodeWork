class Solution {
public:
    
    int helper(int n){
        int res = 0;
        while (n){
            n/=10;
            res++;
        }
        return res;
    }
    
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (auto n: nums)
            if (helper(n)%2 == 0) count++;
        return count;
    }
};