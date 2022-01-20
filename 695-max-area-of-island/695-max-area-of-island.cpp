class Solution {
public:
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int max_area = 0;
        int rows = grid.size();
        int columns = grid[0].size();
        
        for (int i = 0; i<rows; i++){
            for (int j = 0; j<columns; j++){
                if (grid[i][j] == 1)
                    max_area = max(max_area, dfs(grid, i,j));
            }
        }
        
        return max_area;
    }
    
    int dfs(vector<vector<int>>& grid, int i, int j){
        int r = grid.size();
        int c = grid[0].size();
        
        if (i<0 || j<0 || i>=r || j>=c||grid[i][j] != 1) return 0;
        
        grid[i][j] = 2;
        
        return (1+dfs(grid, i+1, j) +dfs(grid, i-1, j)+dfs(grid, i, j+1)+dfs(grid, i, j-1));
    }
};