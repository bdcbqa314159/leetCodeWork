class Solution {
public:
    
    vector<int> helper(string & s){
        
        int n = s.size(); vector<int> out(26,0);
        
        for (int i = 0; i<n; i++)
            out[s[i]-'a']++;
        
        return out;
    }
    
    
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size();
        vector<int> out1 = helper(ransomNote),out2 = helper(magazine);
        
        for (int i = 0; i<n; i++){
            int j = ransomNote[i]-'a';
            if (out2[j] == 0) return false;
            else{
                if (out2[j]<out1[j]) return false;
            }
        }
        return true;
    }
};