class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if (n == 0 || s[0] == '0') return 0;
        if (n == 1) return 1;
        
        int v1 = 1, v2 = 1, v,d1,d2;
        for (int i = 1; i<n; i++){
            d1 = s[i]-'0';
            d2 = (s[i-1]-'0')*10+d1;
            v = 0;
            
            if (d1 >= 1) v += v2;
            if (d2 <= 26 && d2 >= 10) v += v1;
            
            v1 = v2;
            v2 = v;
        }
        return v;
    }
};