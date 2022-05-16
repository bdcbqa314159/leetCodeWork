class Solution {
public:
    
    bool isValid(char a, char b){
        return (a=='(' && b==')' || a=='[' && b==']' || a=='{' && b=='}');
    }
    
    bool isValid(string s) {
        stack<char> u;
        for (auto &x: s){
            if (!u.empty()){
                char li = u.top();
                if (isValid(li, x)){
                    u.pop();
                    continue;
                }
            }
            u.push(x);
        }
        return u.empty();
    }
};