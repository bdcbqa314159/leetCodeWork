class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ret = 1, n = nums.size();
        
        if (!n) return 0;
        
        int j = 0, zero = 0;
        
        for (int i = 0; i<n; i++){
            if (nums[i] == 0) zero++;
            
            while (j<=i && zero>1){
                if (nums[j] == 0) zero--;
                j++;
            }
            
            ret = max(ret, i-j+1);
            
        }
        
        return ret;
   }
};