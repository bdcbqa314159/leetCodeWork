class Solution {
public:
    
    vector<int> creator(string s){
        int n = s.size();
        vector<int> count(26,0);
        
        for (int i = 0; i<n; i++){
            count[s[i]-'a']++;
        }
        
        return count;
    }
    
    
    bool canConstruct(string ransomNote, string magazine) {
        
        vector<int> out1 = creator(ransomNote);
        vector<int> out2 = creator(magazine);
        
        int n = ransomNote.size();
        
        for (int i = 0; i<n; i++){
            if (out2[ransomNote[i]-'a']==0) return false;
            else{
                if (out1[ransomNote[i]-'a']>out2[ransomNote[i]-'a'])
                    return false;
            }
        }
        
        return true;
        
               
    }
};