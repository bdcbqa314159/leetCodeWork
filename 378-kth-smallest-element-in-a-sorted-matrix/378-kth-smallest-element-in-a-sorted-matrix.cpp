class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        vector<int> u;
        for (int i = 0; i<n; i++)
            for (int j = 0; j<n; j++)
                u.push_back(matrix[i][j]);
        sort(u.begin(), u.end());
        return u[k-1];
    }
};