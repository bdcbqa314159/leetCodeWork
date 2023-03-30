class Solution {
public:
    
    int helper(int n){
        int ans = 0;
        while (n){
            n/=10;
            ans++;
        }
        return ans;
    }
    
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int n: nums){
            if (helper(n)%2 == 0) count++;
        }
        return count;
    }
};