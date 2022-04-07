class Solution {
public:
    
    vector<int> helper(string &s){
        vector<int> u(26,0); int n = s.size();
        for (int i = 0; i<n; i++) u[s[i]-'a']++;
        return u;
    }
    
    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size();
        if (n!=m) return false;
        vector<int> u = helper(s), v = helper(t);
        for (int i = 0; i<26; i++) if (v[i]!=u[i]) return false;
        return true;
    }
};