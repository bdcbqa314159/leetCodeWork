class Solution {
public:
    
    string shift(string &s){
        string t;
        int n = s.size();
        
        for (int i = 1; i<n; i++){
            int diff = s[i]-s[i-1];
            if (diff<0) diff+=26;
            t+='a'+diff+',';
        }
        return t;
    }
    
    vector<vector<string>> groupStrings(vector<string>& strings) {
        unordered_map<string, vector<string>> umap;
        vector<vector<string>> groups;
        
        for (auto x: strings){
            umap[shift(x)].push_back(x);
        }
        
        for (auto m: umap){
            vector<string> group = m.second;
            
            //sort(group.begin(), group.end());
            
            groups.push_back(group);
        }
        
        return groups;
        
    }
};