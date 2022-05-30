class Solution {
public:
    int divide(int dividend, int divisor) {
        bool isNegative = (dividend<0 && divisor>0 || dividend>0&&divisor<0);
        long absDividend = abs((long)dividend);
        long absDivisor = abs((long)divisor);
        
        long res = 0;
        while (absDividend >= absDivisor){
            long tmp = absDivisor, count = 1;
            while (tmp<= absDividend){
                tmp <<=1;
                count <<=1;
            }
            res += count >> 1;
            absDividend -= tmp>>1;
        }
        if (isNegative){
            res = ~res+1;
        }
        return res >INT_MAX ? INT_MAX : (int) res;
    }
};