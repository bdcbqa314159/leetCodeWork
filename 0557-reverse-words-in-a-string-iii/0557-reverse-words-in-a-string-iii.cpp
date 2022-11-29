class Solution {
public:
    
    string helper(string &u){
        int l = 0, r = u.size()-1;
        while (l<r){
            swap(u[l],u[r]);l++;r--;
        }
        return u;
    }
    
    string reverseWords(string s) {
       stringstream ss(s);
        string word{}, ans{};
        
        while(ss>>word){
            ans+=helper(word);
            ans+=" ";
        }
        
        return ans.substr(0, ans.size()-1);
    }
};