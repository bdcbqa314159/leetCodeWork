class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> arr(heights);
        int n = heights.size();
        sort(arr.begin(), arr.end());
        int count = 0;
        for (int i = 0; i<n; i++)
            if(arr[i]!=heights[i]) count++;
        return count;
    }   
};