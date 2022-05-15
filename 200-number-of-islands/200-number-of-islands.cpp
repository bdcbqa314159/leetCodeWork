class Solution {
public:
    
    void dfs(vector<vector<char>>& grid, int x,int y){
        
        int h = grid.size();
        int w = grid[0].size();        
        
        grid[x][y] = '0';
        if (x+1<h && grid[x+1][y]=='1')
            dfs(grid, x+1, y);
        if (x-1>=0 && grid[x-1][y]=='1')
            dfs(grid, x-1, y);
        if (y-1>=0 && grid[x][y-1]=='1')
            dfs(grid, x, y-1);
        if (y+1<w && grid[x][y+1]=='1')
            dfs(grid, x, y+1);
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        int h = grid.size();
        if (h == 0) return 0;
        int w = grid[0].size();
        if (w==0) return 0;
        
        int count = 0;
        
        for (int i = 0; i<h; i++){
            for (int j = 0; j<w; j++){
                if (grid[i][j] == '1'){
                    count++;
                    dfs(grid, i, j);
                }
            }
        }
        return count;
    }
};