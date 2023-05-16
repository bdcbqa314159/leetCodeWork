class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        vector<int> ans(26);
        for (char c: s)
            ans[c-'a']++;
        for (int i =0; i<n; i++){
            if (ans[s[i]-'a'] == 1) return i;
        }
        return -1;
    }
};