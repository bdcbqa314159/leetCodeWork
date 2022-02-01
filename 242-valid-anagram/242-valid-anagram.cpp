class Solution {
public:
    
    unordered_map<char, int> creator(string &s){
        unordered_map<char, int> result;
        
        for (int i = 0; i<s.size(); i++){
            
            if (result.count(s[i]) == 0){
                result[s[i]] = 1;
            }
            else result[s[i]]++;
        }
        
        return result;
    }

    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size()) return false;
        unordered_map<char, int> umapS = creator(s);
        unordered_map<char, int> umapT = creator(t);
        
        unordered_map<char, int>::iterator it;
        
        for (it = umapS.begin(); it!=umapS.end(); it++){
        
            if (umapT.count(it->first) == 0) return false;
            
            else{
                if (it->second != umapT[it->first]) return false;
            }
        }
        
        return true;
       
    }
};