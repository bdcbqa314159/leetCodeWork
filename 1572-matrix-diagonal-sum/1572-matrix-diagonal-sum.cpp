class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(), s1 = 0, s2 = 0;
        for (int i = 0; i<n; i++){
            s1+=mat[i][i];
            s2+=mat[i][n-1-i];
        }
        
        if (n%2 == 1) return s1+s2-mat[n/2][n/2];
        return s1+s2;
    }
};