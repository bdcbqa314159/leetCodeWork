class Solution {
public:
    
    
    string shift(string &s){
        
        string result;
        int n = s.size();
        for (int i = 1; i<n; i++){
            int diff = s[i]-s[i-1];
            diff+=(diff<0)*26;
            result+='a'+diff+',';
        }
        
        return result;
        
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