class Solution {
public:
    
    void dfs(vector<vector<char>> &grid, int i, int j){
        int r = grid.size(), c = grid[0].size();
        grid[i][j] = '0';
        if (i+1 < r && grid[i+1][j] == '1')
            dfs(grid, i+1, j);
        if (i-1 >= 0 && grid[i-1][j] == '1')
            dfs(grid, i-1,j);
        if (j+1 <c && grid[i][j+1]=='1')
            dfs(grid, i, j+1);
        if (j-1>=0 && grid[i][j-1]=='1')
            dfs(grid, i, j-1);
        
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size(), c = grid[0].size();
        if (r == 0 || c == 0) return 0;
        int count = 0;
        for (int i = 0; i<r; i++){
            for (int j = 0; j<c ; j++){
                if (grid[i][j] == '1'){
                    count++;
                    dfs(grid, i, j);
                }
            }
        }return count;
    }
};