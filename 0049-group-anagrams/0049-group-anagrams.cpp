class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> umap;
        
        for (auto s: strs){
            string key = s;
            sort(key.begin(), key.end());
            umap[key].push_back(s);
        }
        
        auto it = umap.begin();
        for (it;it!=umap.end(); it++)
            result.push_back(it->second);
        return result;
    }
};