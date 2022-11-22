class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int N = strs.size();
        if (N == 0) return {};
        string prefix = strs[0];
        
        for (int i = 1; i<N; i++){
            int k = 0;
            string str = strs[i];
            while (k<prefix.size() && k<str.size()){
                if (prefix[k]!=str[k]) break;
                k++;
            }
            prefix = prefix.substr(0, k);
        }
        return prefix;
    }
};