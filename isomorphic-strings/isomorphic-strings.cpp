class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> m;
        vector<bool> p(256,false);
        
        int len1 = s.size();
        for (int i = 0; i<len1; i++){
            char c1 = s[i];
            char c2 = t[i];
            
            if (m.count(c1) == 0){
                if (p[c2]) return false;
                m[c1] = c2;
                p[c2] = true;
            }
            
            else{
                if (m[c1] != c2)
                    return false;
            }
        }
        return true;
    }
};