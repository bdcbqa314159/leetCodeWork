class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        
        int ans = 0;
        vector<vector<bool>> visited(r, vector<bool>(c, false));
        queue<pair<int,int>> q;
        vector<vector<int>>dir = {{0,1}, {0,-1}, {-1,0},{1,0}};
        
        for (int i = 0; i<r; i++){
            for (int j = 0; j<c; j++){
                if (grid[i][j] == '0' || visited[i][j])
                    continue;
                else{
                    ans++;
                    q.push(make_pair(i,j));
                    
                    while(q.size()){
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        if (x<0||x>=r||y<0||y>=c||visited[x][y]||grid[x][y]=='0')
                            continue;
                        visited[x][y] = true;
                        for (int d = 0; d<dir.size(); d++)
                            q.push(make_pair(x+dir[d][0], y+dir[d][1]));
                    }
                }
            }
        }
        return ans;
    }
};