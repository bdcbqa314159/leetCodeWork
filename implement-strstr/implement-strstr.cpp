class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.size()<needle.size()) return -1;
        if (needle.size() == 0) return 0;
        
        int i{}, j{};
        
        while(i<needle.size() && j<haystack.size()){
            if (needle[i] != haystack[j]){
                j = j-i+1;
                i = 0;
                continue;
            }
            i++;j++;
        }
        if (i == needle.size()) return j-i;
        else return -1;
    }
};
