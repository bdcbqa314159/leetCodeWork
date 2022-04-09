class Solution {
public:
    string interpret(string command) {
        int n = command.size(), j = 0;
        string s = "";
        while (j<n){
            if (command[j] == 'G'){
                s+="G";j++;
            }
            else{
                if (command[j+1] == ')'){
                    s+="o"; j+=2;
                }
                else{
                    s+="al"; j+=4;
                }
            }
        }
        return s;
    }
};