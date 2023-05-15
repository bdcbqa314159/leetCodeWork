class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        map<char,char> m;
        vector<bool> visited(256,false);
        
        for (int i = 0; i<n; i++){
            char c1 = s[i], c2 = t[i];
            if (m.find(c1)==m.end()){
                if (visited[c2]) return false;
                m[c1] = c2;
                visited[c2] = true;
            }
            else{
                if (m[c1]!=c2) return false;
            }
        }
        return true;
    }
};