class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size(), count = 0;
        vector<int> a(heights);
        sort(a.begin(), a.end());
        for (int i = 0; i<n; i++){
            if (a[i]!=heights[i]) count++;
        }
        return count;
    }
};