class Solution {
public:
    string toLowerCase(string s) {
        char ch;
        string u = "";
        for (int i = 0; i<s.size(); i++){
            ch = tolower(s[i]);
            u+=ch;
        }
        return u;
    }
};