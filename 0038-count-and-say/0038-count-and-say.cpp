class Solution {
    
    string process(string &s)
    {
        int i = 0;
        string r;
        while(i < s.length())
        {
            int l = 1;
            while(i < s.length()-1 && s[i] == s[i+1])
            {
                l++;
                i++;
            }
            r = r + to_string(l) + s[i];
            i++;
        }
        return r;
    }
    
public:
    string countAndSay(int n) {
        string r = "1";
        if(n == 1) return r;
        for(int i = 2;i <= n;i++)
            r = process(r);
        return r;
    }
    
};