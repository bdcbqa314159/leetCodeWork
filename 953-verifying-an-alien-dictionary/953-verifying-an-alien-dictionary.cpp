class Solution {
public:
    
    unordered_map<char, int> helper(string &s){
        unordered_map<char, int> u;
        for (int i = 0; i<s.size(); i++){
            u[s[i]] = i;
        }
        return u;
    }
    
    
    bool isAlienSorted(vector<string>& words, string order) {
        int n = words.size();
        unordered_map<char, int> u = helper(order);
        for (int i = 0; i<n-1; i++){
            string w1 = words[i], w2 = words[i+1];
            
            for (int j = 0; j<w1.size();j++){
                if (j == w2.size()) return false;
                if (w1[j] != w2[j]){
                    if (u[w2[j]]<u[w1[j]]) return false;
                    break;
                }
            }
            
        }
        return true;
    }
};