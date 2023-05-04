class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> umap;
        
        for (string x: strs){
            string k = x;
            sort(k.begin(), k.end());
            umap[k].push_back(x);
        }
        
        unordered_map<string, vector<string>>::iterator it;
        for (it = umap.begin(); it!=umap.end(); ++it){
            result.push_back(it->second);
        }
        return result;
    }
};