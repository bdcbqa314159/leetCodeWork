class Solution {
public:
    string toLowerCase(string s) {
        char ch;
        for (int i = 0; i<s.size(); i++){
            ch = tolower(s[i]);
            s[i] = ch;
        }
        return s;
    }
};