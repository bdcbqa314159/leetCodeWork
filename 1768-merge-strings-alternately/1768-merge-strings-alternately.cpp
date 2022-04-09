class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        int m = word1.size(), n = word2.size(), i=0, j=0;
        
        while (i<m && j<n){
            s+=word1[i];
            s+=word2[j];
            i++;
            j++;
        }
        
        while (j<n){
            s+=word2[j];j++;
        }
        
        
        while (i<m){
            s+=word1[i];i++;
        }
        return s;
    }
};