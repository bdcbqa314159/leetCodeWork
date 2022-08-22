class Solution {
public:
    bool isPowerOfFour(int n) {
        long int k = 1;
        while (k<n){
            k*=4;
        }
        return k==n;
    }
};