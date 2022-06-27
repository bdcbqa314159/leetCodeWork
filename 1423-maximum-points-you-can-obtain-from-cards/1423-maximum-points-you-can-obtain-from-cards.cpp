class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l_s[k+1], r_s[k+1], n = cardPoints.size();
        l_s[0] = 0, r_s[0] = 0;
        
        for (int i = 1; i<=k; i++){
            l_s[i] = l_s[i-1]+cardPoints[i-1];
            r_s[i] = cardPoints[n-i]+r_s[i-1];
        }
        
        int sum = 0;
        for (int i = 0; i<=k; i++)
            sum = max(sum, l_s[i]+r_s[k-i]);
        
        return sum;
    }
};
