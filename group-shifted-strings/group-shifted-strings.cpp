class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        unordered_map<string, vector<string>> umap;
        for (string s: strings)
            umap[shift(s)].push_back(s);
        
        vector<vector<string>> groups;
        
        for (auto m: umap){
            vector<string> group = m.second;
            sort(group.begin(), group.end());
            groups.push_back(group);
        }
        return groups;
    }
    
    string shift(string &s){
        string t;
        int n = s.size();
        for (int i = 1; i<n; i++){
            int diff = s[i]-s[i-1];
            if (diff<0) diff+=26;
            t += 'a'+diff+',';
        }
        return t;
    }
};