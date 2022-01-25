class Solution {
public:
    
    vector<string> ans;
    
    void ok(string& s, string curr, int index){
        if ((int)curr.size()==((int)s.size())){
            ans.push_back(curr);
            return;
        }
        
        if(s[index]>='0' && s[index]<='9')
            ok(s, curr+s[index], index+1);
        
        else{
            ok(s, curr+(char)(toupper(s[index])), index+1);
            ok(s, curr+(char)(tolower(s[index])), index+1);
        }
        
        return;
    }
    
    
    vector<string> letterCasePermutation(string s) {
       int n = s.size();
        string curr = "";
        ok(s, curr,0);
        
        return ans;
    }
};