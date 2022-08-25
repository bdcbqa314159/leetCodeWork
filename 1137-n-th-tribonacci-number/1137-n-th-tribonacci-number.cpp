class Solution {
public:
    int tribonacci(int n) {
        if (n <=1) return n;
        if (n == 2) return 1;
        int x0 = 0, x1 = 1, x2 = 1;
        int ans = 0;
        while (n-2>0){
            ans = x0+x1+x2;
            x0 = x1;
            x1 = x2;
            x2 = ans;
            n--;
        }
        
        return ans;
    }
};