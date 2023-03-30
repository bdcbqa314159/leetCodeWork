class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size(), i = 0;
        while (i<n && i+1<n && arr[i]<arr[i+1]) i++;
        if (i == 0 || i>=n-1) return false;
        while (i<n && i+1<n){
            if (arr[i]<=arr[i+1]) return false;
            i++;
        }
        return true;
    }
};