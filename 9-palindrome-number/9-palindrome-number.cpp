class Solution {
public:
    
    long int helper(int x){
    
        long int r = 0;
        while (x>0){
            int unit = x%10;
            x /= 10;
            r = 10*r+unit;
        }
        
        return r;
    
    }
    
    bool isPalindrome(int x) {
        if (x<0) return false;
        return x == helper(x);
    }
};