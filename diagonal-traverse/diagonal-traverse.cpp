class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<int> ans(m*n);
        
        int row = 0, col = 0;
        for (int i = 0; i<m*n; i++){
            ans[i] = mat[row][col];
            int sum = row+col;
            
            if (sum % 2 == 0){
                if (col == n-1) row++;
                else if (row == 0) col++;
                else{row--; col++;}
            }
            else{
                if (row == m-1) col++;
                else if (col == 0) row++;
                else{col--; row++;}
            }
        }
        return ans;
    }
};