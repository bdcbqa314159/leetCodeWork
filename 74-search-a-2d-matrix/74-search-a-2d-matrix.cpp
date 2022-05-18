class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size(), c = matrix[0].size(), a = 0, b = r-1, row = 0, mid = 0;
        while (a<=b){
            row = a + (b-a)/2;
            if (target < matrix[row][0]) b = row-1;
            else if (target> matrix[row][c-1]) a = row+1;
            else break;
        }
        
        if (a>b) return false;
        // row = a+(b-a)/2;
        a = 0; b = c-1;
        
        while (a<=b){
            mid = a + (b-a)/2;
            int x = matrix[row][mid];
            if (target == x) return true;
            else if(target < x) b = mid-1;
            else a = mid+1;
        }
        
        return false;
        
    }
};