class Solution {
public:
    
    bool helper(char a, char b){
        return (a=='(' && b==')' || a=='{' && b=='}' || a=='[' && b==']');
    }
    
    bool isValid(string s) {
        stack<char> t;
        for (int i = 0; i<s.size(); i++){
            if (!t.empty()){
                char li = t.top();
                if (helper(li, s[i])){
                    t.pop();
                    continue;
                }
            }
            t.push(s[i]);
        }
        return t.size() == 0;
    }
};