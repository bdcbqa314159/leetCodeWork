class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ret = 1, n = nums.size();
        if (n == 0) return 0;
        
        int j = 0, zeros = 0;
        
        for (int i =0; i<n; i++){
            if (nums[i] == 0) zeros++;
            while (j<=i && zeros > 1){
                if (nums[j] == 0) zeros--;
                j++;
            }
            
            ret = max(ret, i-j+1);
        }
        
        return ret;
    }
};