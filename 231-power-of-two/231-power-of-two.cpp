class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long n1 = 1;
        
        while(n1<n){
            n1*=2;
        }
        
        return (n1 == n);
    }
};

