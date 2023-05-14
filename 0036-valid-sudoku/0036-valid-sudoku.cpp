class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int r = board.size(), c = board[0].size();
        vector<unordered_map<int,int>> rows(9), cols(9), box(9);
        for (int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                char x = board[i][j];
                if (x != '.' && (rows[i][x]||cols[j][x]||box[i/3*3+j/3][x])) return false;
                rows[i][x]++;cols[j][x]++;box[i/3*3+j/3][x]++;
            }
        }
        return true;
    }
};