class Solution {
public:
    int minDistance(string word1, string word2) {
        return word1.size()+word2.size()-2*findLCS(word1,word2);
    }
    
    int findLCS(string word1, string word2){
        
        int n = word1.size(), m = word2.size();
        vector<int> *dp = new vector<int>(n+m);
        
        for (int i = 1; i<=n; i++){
            vector<int> *curr = new vector<int>(m+n);
            for (int j = 1; j<=m; j++){
                if (word1[i-1] == word2[j-1])
                    curr->at(j)= 1+dp->at(j-1);
                else
                    curr->at(j)= max(curr->at(j-1), dp->at(j));
            }
            dp = curr;
        }
        
        return dp->at(m);
    }
};