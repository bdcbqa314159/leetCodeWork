class Solution {
public:
    
    int helper(string &s){
        return (s[0]-'0')*10+(s[1]-'0');
    }
    
    
    string freqAlphabets(string s) {
        int n = s.size(), i = 0;
        string u = "", out = "";
        while (i<n){
            if ( (s[i] == '1' || s[i] == '2') && (i+2<n) && (s[i+2] == '#')){
                u+=s[i]; u+=s[i+1];
                int n = helper(u);
                char c = n-1+'a';
                out+=c;
                u = "";
                i+=3;
            }
            else {
                int n = s[i]-'0';
                char c = n-1+'a';
                out+=c;
                u = "";
                i++;
            }
        }return out;
    }
};