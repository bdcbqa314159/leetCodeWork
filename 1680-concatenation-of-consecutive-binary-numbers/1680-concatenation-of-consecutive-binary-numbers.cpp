class Solution {
public:
    
    int concatenatedBinary(int n) {
        
        long long int val = 0;
        long long int myMax = 1000000007;
        int i = 1;
        
        while (i<=n){
            val = ((val << (1+int(log2(i))))%myMax+i)%myMax;
            i++;
        }
        
        return val;
    }
};