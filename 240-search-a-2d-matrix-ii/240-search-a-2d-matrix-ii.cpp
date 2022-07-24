class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size(), c = matrix[0].size();
        
        int sx = 0, sy = c-1;
        
        while (sx<r && sy>=0){
            if (matrix[sx][sy] == target) return true;
            else if (matrix[sx][sy]>target) sy--;
            else sx++;
        }
        return false;
    }
};