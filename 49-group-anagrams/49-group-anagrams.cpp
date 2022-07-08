class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        unordered_map<string, vector<string>> umap;
        
        for (string str: strs){
            string temp = str;
            sort(temp.begin(), temp.end());
            
            umap[temp].push_back(str);
        }
        
        unordered_map<string, vector<string>>::iterator it;
        
        for (it = umap.begin(); it!=umap.end(); it++)
            answer.push_back(it->second);
        
        return answer;
    }
};