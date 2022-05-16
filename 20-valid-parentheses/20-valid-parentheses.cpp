class Solution {
public:
    
    bool isValid(char a, char b){
        return (a=='(' && b==')' || a=='{' && b=='}' || a=='[' && b==']');
    }
    
    
    bool isValid(string s) {
        stack<char> y;
        for (char &x:s){
            if (!y.empty()){
                char li = y.top();
                if (isValid(li,x)){
                    y.pop();
                    continue;
                }
            }
            y.push(x);
        }
        return y.empty();
    }
};