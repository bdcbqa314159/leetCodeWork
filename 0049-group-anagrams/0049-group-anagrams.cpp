class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>> umap;
        
        for (auto x: strs){
            string key = x;
            sort(key.begin(), key.end());
            umap[key].push_back(x);
        }
        
        auto it = umap.begin();
        for (it;it!=umap.end();it++)
            result.push_back(it->second);
        return result;
    }
};