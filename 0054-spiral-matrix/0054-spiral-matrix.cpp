class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.size() == 0) return {};
        int i = 0, j = 0;
        
        int h = matrix.size(), w = matrix[0].size();
        int step = 1;
        
        vector<int> result(h*w);
        int index = 0;
        
        while (h>0 && w>0){
            
            for (int k = 0; k<w; k++){
                result[index] = matrix[i][j];
                index++;
                j+=step;
            }
            
            j-=step;
            i+=step;
            h--;
            
            for (int k = 0; k<h; k++){
                result[index] = matrix[i][j];
                index++;
                i+=step;
            }
            
            i-=step;
            step*=-1;
            j+=step;
            w--;
        }
        
        
        return result;
    }
};