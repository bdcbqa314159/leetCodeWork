class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string key;
        vector<vector<string>> answer;
        unordered_map<string, vector<string>> umap;
        unordered_map<string, vector<string>>::iterator it;
        
        for (string str: strs){
            key = str;
            sort(key.begin(), key.end());
            umap[key].push_back(str);
        }
        
        for (it = umap.begin(); it != umap.end(); it++)
            answer.push_back(it->second);
        return answer;
    }
};