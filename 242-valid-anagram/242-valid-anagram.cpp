class Solution {
public:
    
    vector<int> helper(string &u){
        vector<int> out(26,0);
        for (int i = 0; i<u.size(); i++)
            out[u[i]-'a']++;
        return out;
    }
    
    
    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size();
        if (n!=m) return false;
        
        vector<int> u = helper(s), v = helper(t);
        
        for (int i = 0; i<26; i++){
            if (u[i] != v[i])
                return false;
        }
        return true;
    }
};