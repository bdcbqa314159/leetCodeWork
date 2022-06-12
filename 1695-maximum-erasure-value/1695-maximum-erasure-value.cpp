class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        const int NIL = -1;
        int pos[10001];
        memset(pos, NIL, sizeof(pos));
        
        int start = 0;
        int maxSum = 0, sum = 0;
        
        for (int i = 0; i<nums.size(); i++){
            int n = nums[i];
            if (pos[n]!=NIL){
                maxSum = max(maxSum, sum);
                while(start<=pos[n]){
                    
                    sum-=nums[start];
                    pos[nums[start]]=NIL;
                    
                    start++;
                }
            }
            sum+=n;
            pos[n]=i;
        }
        maxSum = max(maxSum,sum);
        return maxSum;
    }
};