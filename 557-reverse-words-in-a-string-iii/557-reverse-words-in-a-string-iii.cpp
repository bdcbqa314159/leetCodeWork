class Solution {
public:
    
    string helper(string &s){
        int l = 0, r = s.size()-1;
        while(l<=r){
            swap(s[r],s[l]);
            l++;r--;
        }
        return s;
    }
    
    string reverseWords(string s) {
        stringstream str(s);
        string word{}, ans{""};
        
        while(str>>word){
            ans+=helper(word);
            ans+=" ";
        }
        
        return ans.substr(0, ans.size()-1);
    }
};