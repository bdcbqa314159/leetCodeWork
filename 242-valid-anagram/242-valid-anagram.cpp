class Solution {
public:
    
    vector<int> helper(string s){
        vector<int> o(26,0);
        for (int i = 0; i<s.size(); i++)
            o[s[i]-'a']++;
        return o;
    }
    
    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size();
        if (n!=m) return false;
        vector<int> u = helper(s), v = helper(t);
        for (int i =0; i<u.size(); i++){
            if (u[i] != v[i])
                return false;
        }
        return true;
    }
};