class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> out(n, vector<int>(n,0));
        int sr = 0;
        int er = n-1;
        int sc = 0;
        int ec = n-1;
        int count = 1;
        int lim = n*n+1;
        
        while ( (sr<=er && sc<=ec) ){
            for (int i = sc; i<=ec; i++){
                out[sr][i] = count;
                count++;
            }
            sr++;
            if(count==lim) return out;
            
            for(int i = sr; i<=er; i++){
                out[i][ec] = count;
                count++;
            }
            ec--;
            if(count==lim) return out;
            
            for(int i = ec; i>=sc; i--){
                out[er][i] = count;
                count++;
            }
            er--;
            if(count==lim) return out;
            
            for(int i = er; i>=sr; i--){
                out[i][sc] = count;
                count++;
            }
            sc++;
            if(count==lim) return out;
            
        }
        
        return out;
        
    }
};