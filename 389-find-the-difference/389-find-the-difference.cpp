class Solution {
public:
    
    vector<int> helper(string &s){
        vector<int> u(26,0);
        for (int i = 0; i<s.size(); i++)
            u[s[i]-'a']++;
        return u;
    }
    
    char findTheDifference(string s, string t) {
        char ans;
        vector<int> u = helper(s), v = helper(t);
        for (int i = 0; i<26; i++){
            if (v[i]-u[i] == 1){
                ans = i+'a';
                break;
            }
        }
        return ans;
    }
};