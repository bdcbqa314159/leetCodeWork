class Solution {
public:
    bool checkRecord(string s) {
        int a = 0;
        int l = 0;
        int n = s.size();
        
        for (int i = 0; i<s.size(); i++){
            
            if (s[i] == 'A') a++;
            
            if (s[i] == 'L' && (i+1 < n && s[i+1] == 'L') && (i+2<n && s[i+2] == 'L')) return false; 
        }
        
        return (a<=1);
        
    }
};