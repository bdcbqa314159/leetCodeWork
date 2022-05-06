class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> results;
        
        unordered_map<string, vector<string>> umap;
        
        for (string &s: strs){
            string key = s;
            sort(key.begin(), key.end());
            umap[key].push_back(s);
        }
        
        for (auto &p: umap)
            results.push_back(p.second);
        
        
        return results;
    }
};