class Solution {
public:
    
    int reverse(int num){
        int rev = 0;
        while(num){
            rev = 10*rev+num%10;
            num/=10;
        }
        return rev;
    }
    
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        int M = 1e9+7;
        int res = 0;
        unordered_map<int,int> mp;
        
        for (int i = n-1; i>=0; i--){
            int diff = nums[i]-reverse(nums[i]);
            if (mp.count(diff) == true)
                res = (res+mp[diff])%M;
            mp[diff]++;
        }
        
        return res;
        
    }
};