class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size(), m = mat[0].size();
        if (n*m != r*c) return mat;
        vector<int> v;
        vector<vector<int>> ans(r, vector<int>(c,0));
        
        for (int i = 0; i<n; i++){
            for (int j = 0; j<m; j++){
                v.push_back(mat[i][j]);
            }
        }
        
        int k = 0;
        for (int i = 0; i<r; i++){
            for (int j = 0; j<c; j++){
                ans[i][j] = v[k]; k++;
            }
        }
        return ans;
    }
};