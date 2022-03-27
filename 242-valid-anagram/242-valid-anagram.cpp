class Solution {
public:
    
    vector<int> helper(string &s){
        int n = s.size();
        vector<int> out(26,n);
        
        for (int i = 0; i<n; i++){
            out[s[i]-'a']++;
        }
        
        return out;
    }
    
    
    bool isAnagram(string s, string t) {
        
        int n = s.size(), m = t.size();
        if (n!=m) return false;
        
        vector<int> out1 = helper(s), out2 = helper(t);
        
        for (int i = 0; i < out1.size(); i++)
            if (out1[i]!=out2[i]) return false;
        
        return true;
        
    }
};