class Solution {
public:
    
    void dfs(vector<vector<int>>& grid, int i, int j){
        const int rows = grid.size();
        const int cols = grid[0].size();
        
        if (i<0 || i>=rows || j<0 || j>=cols || grid[i][j] != 1) return;
        
        grid[i][j] = 0;
        
        dfs(grid, i-1, j);
        dfs(grid, i+1, j);
        dfs(grid, i, j-1);
        dfs(grid, i, j+1);
        
    }
    
    
    int numEnclaves(vector<vector<int>>& grid) {
        const int rows = grid.size();
        const int cols = grid[0].size();
        
        for (int i = 0; i<rows; i++){
            if (grid[i][0]) dfs(grid, i, 0);
            if (grid[i][cols-1]) dfs(grid, i, cols-1);
        }
        
        for (int i = 0; i<cols; i++){
            if (grid[0][i]) dfs(grid, 0, i);
            if (grid[rows-1][i]) dfs(grid, rows-1, i);
        }
        
        int count = 0;
        
        for(int i = 0; i<rows; i++){
            for(int j = 0; j<cols; j++){
                if (grid[i][j]) count++;
            }
        }
        return count;
    }
};