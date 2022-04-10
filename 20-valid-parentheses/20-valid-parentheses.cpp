class Solution {
public:
    
    bool isEqual(char c1, char c2){
        if (c1 == '(' && c2 == ')') return true;
        if (c1 == '{' && c2 == '}') return true;
        if (c1 == '[' && c2 == ']') return true;
        return false;
    }
    
    bool isValid(string s) {
        vector<char> st{};
        for (char &c: s){
            
            if (st.size()!=0){
                char li = st[st.size()-1];
                if (isEqual(li,c)){
                    st.pop_back();
                    continue;
                }
            }
            
            st.push_back(c);
        }
        return (st.size()==0);
    }
};