class Solution {
public:
    string decodeString(string s) {
        stack<int> counter;
        stack<string> strings;
        string current;
        int k = 0;
        
        for (auto ch: s){
            if (isdigit(ch))
                k = 10*k+ch-'0';
            else if (ch == '['){
                counter.push(k);
                strings.push(current);
                current = "";
                k = 0;
            }
            else if (ch == ']'){
                string decoded = strings.top();
                strings.pop();
                for (int count = counter.top(); count>0; count--)
                    decoded += current;
                counter.pop();
                current = decoded;
            }
            else
                current += ch;
        }
        
        
        return current;
    }
};