class Solution {
public:
    
    void helper(string &s, stack<char> &st){
        for (int i = 0; i<s.size(); i++){
            if (s[i]=='#' && !st.empty())
                st.pop();
            else if (s[i] != '#')
                st.push(s[i]);
        }
        
        return;
    }
    
    
    bool backspaceCompare(string s, string t) {
        stack<char> s1,s2;
        string str1, str2;
        
        helper(s,s1);
        helper(t,s2);
        
        while (!s1.empty()){
            str1.push_back(s1.top());
            s1.pop();
        }
        
        while (!s2.empty()){
            str2.push_back(s2.top());
            s2.pop();
        }
        
        return str1==str2;
    }
};