class Solution {
public:
    bool isValid(pair<int,int>& cell, int n, int m){
        if (cell.first<0||cell.first>=n||cell.second<0||cell.second>=m) return false;
        return true;
    }
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> dist(n, vector<int>(m,-1));
        queue<pair<int,int>> q;
        for (int i =0; i<n; i++){
            for (int j = 0; j<m; j++){
                if (mat[i][j] == 0){
                    dist[i][j] = 0;
                    q.push({i,j});
                }
            }
        }
        
        const int dx[4] = {-1,0,1,0};
        const int dy[4] = {0,-1,0,1};
        
        while (!q.empty()){
            pair<int, int> node = q.front();
            q.pop();
            int i = node.first, j = node.second;
            for (int t = 0; t<4; t++){
                pair<int, int> neighbor = {i+dx[t], j+dy[t]};
                int ii = neighbor.first, jj = neighbor.second;
                if (isValid(neighbor, n,m) && dist[ii][jj] == -1){
                    dist[ii][jj] = dist[i][j]+1;
                q.push(neighbor);
                    
                }
                    
            }
        }
        return dist;
    }
};