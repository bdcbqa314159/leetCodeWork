class Solution {
public:
    bool isPowerOfThree(int n) {
        long int k = 1;
        while (k<n){
            k*=3;
        }
        return k==n;
    }
};