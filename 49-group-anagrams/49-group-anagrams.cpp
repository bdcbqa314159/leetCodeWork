class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> umap;
        for (int i = 0;i<strs.size(); i++){
            string key = strs[i];
            sort(key.begin(), key.end());
            umap[key].push_back(strs[i]);
        }
        
        unordered_map<string, vector<string>>::iterator it = umap.begin();
        for (it; it!= umap.end(); it++){
            ans.push_back(it->second);
        }return ans;
    }
};