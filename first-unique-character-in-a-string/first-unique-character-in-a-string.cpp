class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        vector<int> dict(26);
        
        for (auto x: s)
            dict[x-'a']++;
        
        for (int i = 0; i<n; i++){
            if (dict[s[i]-'a'] == 1)
                return i;
        }
        return -1;
    }
};