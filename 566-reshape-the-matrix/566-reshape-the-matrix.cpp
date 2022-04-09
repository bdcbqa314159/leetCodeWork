class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        int m = mat.size(), n = mat[0].size(), k=0;
        if (n*m != r*c) return mat;
        
        vector<int> v, u(c,0);
        vector<vector<int>> out(r,u);
        
        for (int i = 0; i<m; i++){
            for (int j = 0; j<n; j++)
                v.push_back(mat[i][j]);
        }
        
        for (int i = 0; i<r; i++){
            for (int j = 0; j<c; j++){
                out[i][j] = v[k];
                k++;
            }
        }
        return out;
        
    }
};