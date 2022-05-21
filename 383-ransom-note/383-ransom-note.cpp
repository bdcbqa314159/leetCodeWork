class Solution {
public:
    
    vector<int> helper(string & s){
        vector<int> ans(26,0);
        for (auto x:s){
            ans[x-'a']++;
        }
        return ans;
    }
    
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size(), m = magazine.size();
        if (n>m) return false;
        vector<int> a = helper(ransomNote), b = helper(magazine);
        for (int i = 0; i<26; i++){
            if (a[i]>b[i]) return false;
        }
        return true;
    }
};