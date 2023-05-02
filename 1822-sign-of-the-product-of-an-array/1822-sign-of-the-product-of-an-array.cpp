class Solution {
public:
    
    int signFunc(int x){
        if (x==0) return 0;
        else if (x>0) return 1;
        else return -1;
    }
    
    int arraySign(vector<int>& nums) {
        int result = 1, n = nums.size();
        
        for (int i = 0; i<n; i++){
            result *= signFunc(nums[i]);
            if (result == 0) return 0;
        }
        return result;
    }
};