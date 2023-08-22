class Solution {
public:
    
    string base26_int2str(long long n){
        string ret;
        while(n>0){
            char ch = 'A'+(n-1)%26;
            ret.insert(ret.begin(), ch);
            n-=(n-1)%26;
            n/=26;
        }
        return ret;
    }
    
    
    long long base26_str2int(string &s){
        long long ret = 0;
        for (int i = 0; i<s.size(); i++){
            int n = s[i]-'A'+1;
            ret = ret*26+n;
        }
        return ret;
    }
    
    
    string convertToTitle(int columnNumber) {
        return base26_int2str(columnNumber);
    }
};