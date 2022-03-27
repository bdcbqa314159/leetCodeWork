class Solution {
public:
    
    vector<int> helper(string& s){
        
        vector<int> ans(26,0);
        
        for (int i = 0; i<s.size(); i++)
            ans[s[i]-'a']++;
        
        return ans;
        
    }
    
    
    
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        
        vector<int> out1 = helper(t), out2 = helper(s);
        
        for (int i = 0; i<out1.size();i++)
            if (out1[i]!=out2[i]) return false;
        
        return true;
        
        
    }
};