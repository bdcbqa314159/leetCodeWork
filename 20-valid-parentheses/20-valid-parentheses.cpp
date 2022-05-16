class Solution {
public:
    
    bool helper(char a, char b){
        if (a == '(' && b == ')') return true;
        if (a == '{' && b == '}') return true;
        if (a == '[' && b == ']') return true;
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
        return st.size() == 0;
    }
};