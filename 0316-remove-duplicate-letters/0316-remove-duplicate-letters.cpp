class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> count(26,0);
        vector<bool> visited(26, false);
        stack<char> st;
        
        for (char c: s)
            count[c-'a']++;
        
        for (char c: s){
            int index = c-'a';
            count[index]--;
            
            if (visited[index]) continue;
            
            while (!st.empty() && st.top() > c && count[st.top()-'a']>0){
                visited[st.top() - 'a'] = false;
                st.pop();
            }
            
            st.push(c);
            visited[index] = true;
        }
        
        string res;
        while (!st.empty()){
            res = st.top()+res;
            st.pop();
        }
        
        return res;
    }
};