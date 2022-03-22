class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int r = matrix.size(), c = matrix[0].size(), a = 0, b = r-1;
        while(a<=b){
            int row = a + (b-a)/2;
            
            if (target > matrix[row][c-1]){
                a = row+1;
            }
            
            else if (target < matrix[row][0]){
                b = row-1;
            }
            
            else break;
        }
        
        if (a > b) return false;
        int row = a+ (b-a)/2, s = 0, e = c-1;
        
        while(s<=e){
            int mid = s+(e-s)/2;
            if (target > matrix[row][mid])
                s = mid+1;
            else if(target < matrix[row][mid])
                e = mid-1;
            
            else return true;
        }
        
        return false;
        
        
    }
};