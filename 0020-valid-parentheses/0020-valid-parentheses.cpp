class Solution {
public:
    bool isValid(char a, char b){
        return (a == '{' && b == '}' || a == '[' && b == ']' || a == '(' && b == ')');
    }
    
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i<s.size(); i++){
            if (st.size()>0){
                char li = st.top();
                if (isValid(li, s[i])){
                    st.pop();
                    continue;
                }
            }
            st.push(s[i]);
        }
        return st.size() == 0;
    }
};