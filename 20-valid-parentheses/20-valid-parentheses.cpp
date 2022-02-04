class Solution {
public:
    
    bool isEqual(char c1, char c2){
        if (c1 == '(' && c2 == ')')
            return true;
        if (c1 == '{' && c2 == '}')
            return true;
        if (c1 == '[' && c2 == ']')
            return true;
        
        return false;
    }
    
    
    bool isValid(string s) {
        
        vector<char> st{};
        
        for (auto& c : s){
            if (st.size()!=0){
                char li = st[st.size()-1];
                
                if (isEqual(li, c)){
                    st.pop_back();
                    continue;
                }
            }
            st.push_back(c);
        }
        
        return (st.size() == 0);
        
        
    }
};

// class Solution:

    
//     def isValid(self, s: str) -> bool:
//         st = []
        
//         for char in s:
//             if len(st)!=0:
//                 li = st[-1]
//                 if self.isEqual(li,char):
//                     st.pop()
//                     continue
//             st.append(char)
        
//         return len(st)==0
        