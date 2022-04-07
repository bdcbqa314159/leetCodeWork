class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size(), count[26] = {};
        
        for (int i = 0; i<n; i++)
            count[s[i]-'a']++;
        
        for (int i = 0; i<n; i++)
            if (count[s[i]-'a']==1) return i;
        
        return -1;
        
    }
};