class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        if (m*n != r*c) return mat;
        vector<int> ans, u(c,0);
        vector<vector<int>> result(r, u);
        
        for (int i = 0; i<m; i++){
            for (int j = 0; j<n; j++){
                ans.push_back(mat[i][j]);
            }
        }
        
        int k = 0;
        
        for (int i = 0; i<r; i++){
            for (int j = 0; j<c; j++){
                result[i][j] = ans[k];
                k++;}
            
        }
        return result;
    }
};