class Solution {
public:
    
    vector<int> helper(string& s){
        int n = s.size(); vector<int> u(26,0);
        for (int i= 0; i<n; i++) u[s[i]-'a']++;
        return u;
    }
    
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> u = helper(ransomNote), v = helper(magazine);
        int n = ransomNote.size();
        for (int i = 0; i<n; i++){
            int j = ransomNote[i]-'a';
            if (v[j]==0) return false;
            else if (v[j]<u[j]) return false;
        }return true;
    }
};