class Solution {
public:
    
    bool allUpper(string word){
        
        for (auto const &w: word){
            if (!isupper(w)) return false;
        }
        
        return true;
    }
    
    bool allLower(string word){
        
        for (auto const &w: word){
            if (isupper(w)) return false;
        }
        
        return true;
    }
    
    bool detectCapitalUse(string word) {
        
        int n = word.size();
        
        if (isupper(word[0])){
            return allUpper(word.substr(1,n-1))||allLower(word.substr(1,n-1));
        }
        
        else
            return allLower(word);
    }
};