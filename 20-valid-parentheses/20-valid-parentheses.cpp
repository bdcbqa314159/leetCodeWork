class Solution {
public:
    
    bool helper(char c1,char c2){
        if (c1 == '(' && c2 == ')') return true;
        if (c1 == '{' && c2 == '}') return true;
        if (c1 == '[' && c2 == ']') return true;
        return false;
    }
    
    bool isValid(string s) {
        vector<char> st{};
        for (int i = 0; i<s.size(); i++){
            if (st.size()!=0){
                char li = st[st.size()-1];
                if (helper(li, s[i])){
                    st.pop_back();
                    continue;
                }
            }
            st.push_back(s[i]);
        }
        
        return st.size()==0;
    }
};