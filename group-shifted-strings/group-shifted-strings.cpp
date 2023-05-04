class Solution {
public:
    
    string shift(string &s){
        
        string t;
        int n = s.size();
        for(int i = 1; i<n; i++){
            int diff = s[i]-s[i-1];
            if (diff<0) diff+=26;
            t+='a'+diff+',';
        }
        
        return t;
    }
    
    vector<vector<string>> groupStrings(vector<string>& strings) {
        vector<vector<string>> result;
        
        unordered_map<string, vector<string>> umap;
        
        for (auto s: strings)
            umap[shift(s)].push_back(s);
        
        for (auto item: umap)
            result.push_back(item.second);
        
        return result;
    }
};