class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int r = board.size(), c = board[0].size();
        unordered_map<char,int> rows[9], cols[9], boxes[9];
        
        for (int i = 0; i<r; i++){
            for (int j = 0; j<c; j++){
                char c = board[i][j];
                if (c!='.' && (rows[i][c]>0 || cols[j][c]>0 || boxes[i/3*3+j/3][c]>0))
                    return false;
                rows[i][c]++;
                cols[j][c]++;
                boxes[i/3*3+j/3][c]++;
            }
        }return true;
    }
};