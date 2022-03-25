class Solution {
public:
    
    vector<int> helper(string &s){
        int n = s.size();
        vector<int> out(26,0);
        
        for (int i = 0; i<n; i++){
            out[s[i]-'a']++;        
        }
    
        return out;
    }
    
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> out1 = helper(ransomNote);
        vector<int> out2 = helper(magazine);
        int n = ransomNote.size();
        
        for (int i = 0; i<n; i++){
            
            if (out2[ransomNote[i]-'a'] == 0) return false;
            
            else{
                if (out1[ransomNote[i]-'a']>out2[ransomNote[i]-'a']) return false;
            }
        
        }
        
        return true;
    }
};