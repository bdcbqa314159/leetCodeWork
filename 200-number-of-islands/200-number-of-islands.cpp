class Solution {
public:
    
    void dfs(vector<vector<char>> &grid, int x, int y){
        int r = grid.size();
       
        int c = grid[0].size();
        
        grid[x][y] = '0';
        if (x+1<r && grid[x+1][y] == '1')
            dfs(grid, x+1,y);
        if (x-1>=0 && grid[x-1][y] == '1')
            dfs(grid, x-1, y);
        if (y+1<c && grid[x][y+1]=='1')
            dfs(grid, x, y+1);
        if (y-1>=0 && grid[x][y-1] == '1')
            dfs(grid, x, y-1);
        
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        if (r == 0) return 0;
        int c = grid[0].size();
        if (c == 0) return 0;
        int count = 0;
        for (int i = 0; i<r; i++){
            for (int j = 0; j<c; j++){
                if (grid[i][j] == '1'){
                    count++;
                    dfs(grid, i,j);
                }
            }
        }
        return count;
    }
};