class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        if (n*m != r*c) return mat;
        
        vector<int> v;
        vector<vector<int>> out(r, vector<int>(c,0));
        
        for (int i = 0; i<m; i++){
            for (int j = 0; j<n; j++)
                v.push_back(mat[i][j]);
        }
        int k = 0;
        for (int i = 0; i<r; i++){
            for (int j = 0; j<c; j++){
                out[i][j] = v[k];
                k++;
            }
        }
        return out;
    }
};