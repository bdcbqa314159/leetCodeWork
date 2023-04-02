class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string prefix = strs[0], other;
        
        for (int i = 1; i<n; i++){
            int j = 0;
            other = strs[i];
            while (j<other.size() && j<prefix.size() && other[j]==prefix[j])
                j++;
            prefix = prefix.substr(0,j);
        }
        return prefix;
    }
};