class Solution {
public:
    
    bool isValid(char a, char b){
        return (a=='{' && b=='}' || a=='[' && b==']' || a=='(' && b==')');
    }
    
    
    bool isValid(string s) {
        stack<char> u;
        for (int i = 0; i<s.size(); i++){
            if (!u.empty()){
                char li = u.top();
                if (isValid(li, s[i])){
                    u.pop();
                    continue;
                }
            }
            u.push(s[i]);
        }
        return u.size()==0;
    }
};