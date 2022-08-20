class Solution {
public:
    
    long int helper(int x){
        long int r = 0;
        while (x>0){
            r*=10;
            r+= x%10;
            x/=10;
        }
        return r;
    }
    
    bool isPalindrome(int x) {
        if (x<0) return false;
        return x==helper(x);
    }
};