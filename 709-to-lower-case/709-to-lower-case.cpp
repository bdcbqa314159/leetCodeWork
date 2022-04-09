class Solution {
public:
    string toLowerCase(string s) {
        char ch;
        // string u = "";
        for (int i = 0; i<s.size(); i++){
            ch = tolower(s[i]);
            s[i] = ch;
        }
        return s;
    }
};