class Solution {
public:
    bool isIsomorphic(string s, string t) { 
        map<char, char>_m;
        bool _p[256] = {false};
        int len1 = s.length();
        for (int i = 0;i < len1;i++) {
            char c1 = s[i];
            char c2 = t[i];
            if (_m.count(c1) == 0) {
                if(_p[c2]) return false;
                _m[c1] = c2;
                _p[c2] = true;
            } else {
                if (_m[c1] != c2) 
                    return false;
            }
        }
        return true;
        
    }
};