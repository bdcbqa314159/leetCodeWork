class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int r = board.size(), c = board[0].size();
        
        unordered_map<char, int> x[9], y[9], z[9];
        
        for (int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                char c = board[i][j];
                if (c!='.' && (x[i][c]>0 ||y[j][c]>0 || z[i/3*3+j/3][c]>0))
                    return false;
                x[i][c]++; y[j][c]++; z[i/3*3+j/3][c]++;
            }
        }return true;
    }
};