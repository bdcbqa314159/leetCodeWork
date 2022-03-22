class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    
        int m = mat.size(),n = mat[0].size();
        
        if (r*c != m*n) return mat;
        else{
            int k = 0; 
            vector<int> v(c,0), temp(r*c,0);
            vector<vector<int>> mat2(r,v);
            
            for (int i = 0; i<m; i++){
                for (int j = 0; j<n; j++){
                    temp[k] = mat[i][j];
                    k++;
                }
            }
            
            k = 0;
            
            for (int i = 0; i<r; i++){
                for (int j = 0; j<c; j++){
                    mat2[i][j] = temp[k];
                    k++;
                }
            }
            
            
            return mat2;
        }
    }
};