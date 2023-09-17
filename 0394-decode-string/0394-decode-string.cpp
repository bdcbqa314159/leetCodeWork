class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;
        stack<string> stringStack;
        string current;
        
        int k = 0;
        for (auto ch : s){
            if (isdigit(ch))
                k = k*10+ch-'0';
            else if (ch == '['){
                countStack.push(k);
                stringStack.push(current);
                current = "";
                k = 0;
            }
            else if (ch == ']'){
                string decodedString  = stringStack.top();
                stringStack.pop();
                for (int count = countStack.top(); count>0; count--){
                    decodedString = decodedString+current;
                }
                countStack.pop();
                current = decodedString;
                
            }
            else{
                current+=ch;
            }
            
        }
        return current;
    }
};