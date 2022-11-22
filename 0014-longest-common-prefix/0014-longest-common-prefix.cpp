class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return {};
        string prefix = strs[0];
        
        int N = strs.size();
        
        for (int i = 1; i<N; i++){
            string str = strs[i];
            int k = 0;
            while (k<prefix.size() && k<str.size()){
                if (prefix[k]!=str[k]) break;
                k++;
            }
            prefix = prefix.substr(0,k);
        }
        return prefix;
    }
};