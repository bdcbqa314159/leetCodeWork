class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0;i<m;i++) {
            vector<int> list;
            for(int j=0,k=i;j<n && k<m;j++,k++) {
                list.push_back(mat[j][k]);
            }
            sort(list.begin(),list.end());
            for(int j=0,k=i,p=0;j<n && k<m;j++,k++,p++) {
                mat[j][k] = list[p];
            }
        }
        
        for(int i=1;i<n;i++) {
            vector<int> list;
            for(int j=0,k=i;k<n && j<m;j++,k++) {
                list.push_back(mat[k][j]);
            }
            sort(list.begin(),list.end());
            for(int j=0,k=i,p=0;k<n && j<m;j++,k++,p++) {
                mat[k][j]=list[p];
            }
        }
        return mat;
    }
};