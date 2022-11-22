class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int N = strs.size();
        if (N == 0) return {};
        string prefix = strs[0];
        
        for (int i = 1; i<N; i++){
            string word = strs[i];
            int l_p = prefix.size(), l_w = word.size();
            
            int index = 0;
            while (index < l_p && index < l_w){
                if (prefix[index]!=word[index]) break;
                index++;
            }
            
            prefix = prefix.substr(0,index);
            
        }
        
        return prefix;
    }
};