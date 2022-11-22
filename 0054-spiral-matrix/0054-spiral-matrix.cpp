class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        if (matrix.size() == 0) return {};
        int i = 0, j = 0;
        int h = matrix.size(), w = matrix[0].size();
        vector<int> result(h*w);
        int step = 1;
        
        int index = 0;
        while (w>0 && h>0){
            for (int k = 0; k<w; k++){
                result[index] = matrix[i][j];
                j+=step;
                index++;
            }
            j-=step;
            i+=step;
            h--;
            
            for (int k = 0; k<h; k++){
                result[index] = matrix[i][j];
                i+=step;
                index++;
            }
            i-=step;
            step*=-1;
            j+=step;
            w--;
        }
        
        
        return result;
    }
};