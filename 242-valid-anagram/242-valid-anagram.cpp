class Solution {
public:
    
    vector<int> helper(string &s){
        int n = s.size();
        vector<int> out(26,0);
        
        for (int i = 0; i<n; i++)
            out[s[i]-'a']++;
        return out;
    }
    
    
    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size();
        if (n!=m) return false;
        
        vector<int> u = helper(s), v = helper(t);
        
        for (int i = 0; i<26; i++)
            if (u[i]!=v[i]) return false;
        
        return true;
    
    }
};