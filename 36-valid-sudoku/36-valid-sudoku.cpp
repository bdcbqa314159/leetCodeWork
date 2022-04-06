class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int r = board.size(), c = board[0].size();
        unordered_map<char, int> rows[9], columns[9], boxes[9];
        
        
        for (int i = 0; i<r; i++){
            for (int j = 0; j<c; j++){
                char ch=board[i][j];
                if (ch != '.' && (rows[i][ch]>0 || columns[j][ch]>0 || boxes[i/3*3+j/3][ch]>0))
                    return false;
                rows[i][ch]++;
                columns[j][ch]++;
                boxes[i/3*3+j/3][ch]++;
            }
        }
        
        
        return true;
    }
};