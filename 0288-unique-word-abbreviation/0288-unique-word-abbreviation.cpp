class ValidWordAbbr {
public:
    unordered_map<string, unordered_set<string>> mp;
    
    ValidWordAbbr(vector<string>& dictionary) {
        for (string s: dictionary){
            int n = s.size();
            string abbr = s[0]+to_string(n)+s[n-1];
            mp[abbr].insert(s);
        }
        return;
    }
    
    bool isUnique(string word) {
        int n = word.size();
        string abbr = word[0]+to_string(n)+word[n-1];
        return mp[abbr].count(word)==mp[abbr].size();
    }
};

/**
 * Your ValidWordAbbr object will be instantiated and called as such:
 * ValidWordAbbr* obj = new ValidWordAbbr(dictionary);
 * bool param_1 = obj->isUnique(word);
 */