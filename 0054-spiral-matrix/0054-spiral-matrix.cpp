class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.size() == 0) return {};
        
        int h = matrix.size(), w = matrix[0].size();
        
        int i = 0, j = 0, index = 0, step = 1;
        vector<int> ans(h*w);
        
        while (h>0 && w>0){
            for (int k = 0; k<w; k++){
                ans[index] = matrix[i][j];
                j+=step;
                index++;
            }
            
            j-=step;
            i+=step;
            h--;
            
            for (int k = 0; k<h; k++){
                ans[index] = matrix[i][j];
                i+=step;
                index++;
            }
            
            i-=step;
            step*=-1;
            j+=step;
            w--;
        }
        return ans;
    }
};