class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n =  nums.size();
        int l = 0, r = n-1, minn = n-1, maxn = 0;
        
        for (int i = 0; i<n; i++){
            if (nums[i]<nums[maxn])
                l = i;
            else if (nums[maxn]<nums[i])
                maxn = i;
            
            if (nums[minn]<nums[n-1-i])
                r = n-1-i;
            else if (nums[n-1-i]<nums[minn])
                minn = n-1-i;
                
        }
        
        if (r>=l) return 0;
        return l-r+1;
    }
};