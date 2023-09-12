class Solution {
public:
    
    bool isValid(char a, char b){
        bool c1 = a == '[' && b == ']';
        bool c2 = a == '{' && b == '}';
        bool c3 = a == '(' && b == ')';
        
        return c1||c2||c3;
    }
    
    
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        
        for (int i = 0; i<n; i++){
            if (st.size() > 0){
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