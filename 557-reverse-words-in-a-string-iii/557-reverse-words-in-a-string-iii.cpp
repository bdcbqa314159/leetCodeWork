class Solution {
public:
    
    string helper(string &s){
        int l = 0;
        int r = s.size()-1;
        
        while(l<r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
        
        return s;
    }
    
    string reverseWords(string str) {
        stringstream s(str);
        string word{}, ans{""};
        
        
        while(s>>word){
            ans += helper(word);
            ans+=" ";
        }
        return ans.substr(0, ans.size()-1);
    }
};