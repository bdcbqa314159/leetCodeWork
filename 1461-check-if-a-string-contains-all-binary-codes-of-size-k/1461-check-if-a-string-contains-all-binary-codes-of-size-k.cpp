class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if (s.size()<k) return false;
        unordered_set<string> hashSet;
        
        for (int i = 0; i<=s.size()-k; i++)
            hashSet.insert(s.substr(i,k));
        return hashSet.size() == pow(2,k);
    }
};