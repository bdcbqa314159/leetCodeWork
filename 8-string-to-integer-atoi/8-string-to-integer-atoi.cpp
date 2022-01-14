class Solution {
public:
    int myAtoi(string s) {
        if (s.empty()) return 0;
        
        int len = s.length(), i = 0, sign = 1;
        
        while(i<len && s[i]==' ') i++;
        
        if (i==len) return 0;
        else if(s[i] == '+') i++;
        
        else if(s[i] == '-'){
            sign = -1;
            i++;
        }
        
        long int out{};
        
        while(s[i]<='9' && s[i]>='0'){
            out *= 10;
            if (out<=INT_MIN || out>=INT_MAX) break;
            
            out += (s[i]-'0');
            i++;
        }
        
        out = sign*out;
        if (out<=INT_MIN) return INT_MIN;
        if (out>=INT_MAX) return INT_MAX;
        
        return (int)out;
    }
};