class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> count(26, 0);
        vector<bool> visited(26, false);
        stack<char> st;
        
        for (char c: s) count[c-'a']++;
        for (char c: s){
            int index = c-'a';
            count[index]--;
            
            if (visited[index]) continue;
            
            while (!st.empty() && st.top()>c && count[st.top()-'a']>0){
                visited[st.top()-'a'] = false;
                st.pop();
            }
            
            st.push(c);
            visited[index] = true;
        }
        
        string result;
        while (!st.empty()){
            result = st.top()+result;
            st.pop();
        }
        return result;
    }
};