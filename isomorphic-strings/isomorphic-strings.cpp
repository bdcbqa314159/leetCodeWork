class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        map<char,char> mapping;
        vector<bool> visited(256,false);
        
        for (int i = 0; i<n; i++){
            char c1 = s[i], c2 = t[i];
            
            if (mapping.find(c1) == mapping.end()){
                if (visited[c2]) return false;
                mapping[c1] = c2;
                visited[c2] = true;
            }
            else{
                if (mapping[c1] != c2) return false;
            }
        }
        return true;
        
    }
};