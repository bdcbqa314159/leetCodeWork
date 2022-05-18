class Solution {
public:
    
    int noDigits(int a){
        int ans = 0;
        while (a){
            a/=10;
            ans++;
        }
        return ans;
    }
    
    
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for (int num: nums){
            if (noDigits(num)%2 == 0)
                ans++;
        }
        
        return ans;
    }
};