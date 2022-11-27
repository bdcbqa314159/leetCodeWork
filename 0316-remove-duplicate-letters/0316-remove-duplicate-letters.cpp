class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<bool> visited(26, false);
        vector<int> count(26, 0);
        stack<char> st;
        
        for (char ch: s)
            count[ch-'a']++;
        for (char ch: s){
            int index = ch-'a';
            count[index]--;
            
            if (visited[index]) continue;
            
            while(!st.empty() && st.top()>ch && count[st.top()-'a']>0){
                char c = st.top();
                st.pop();
                visited[c-'a']= false;
            }
            
            if (visited[index] == false){
                st.push(ch);
                visited[index] = true;
            }
        }
        
        string res("");
        while (!st.empty()){
            res = st.top()+res;
            st.pop();
        }
        
        return res;
        
        
    }
};

