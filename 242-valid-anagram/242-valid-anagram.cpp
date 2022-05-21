class Solution {
public:
    
    vector<int> helper(string& s){
        vector<int> x(26,0);
        for (int i = 0; i<s.size(); i++)
            x[s[i]-'a']++;
        return x;
    }
    
    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size();
        if (n!=m) return false;
        vector<int> u = helper(s), v = helper(t);
        for (int i = 0; i<26; i++){
            if (u[i]!=v[i])
                return false;
        }
        return true;
    }
};