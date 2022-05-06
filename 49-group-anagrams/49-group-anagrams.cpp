class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> results;
        
        if (strs.size() == 0) return results;
        
        unordered_map<string, vector<string>> map;
        
        for (string &s: strs){
            string key = s;
            std::sort(key.begin(), key.end());
            map[key].push_back(s);
        }
        
        for (auto &p: map)
            results.push_back(p.second);
        
        return results;
    }
};