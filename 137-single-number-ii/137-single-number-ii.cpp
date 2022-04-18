class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0, twos = 0, threes = 0;
        for (int n: nums){
            twos = twos | (ones&n);
            ones = ones ^ n;
            threes = ones & twos;
            
            ones &= ~threes;
            twos &= ~threes;
        }
        
        return ones;
    }
};