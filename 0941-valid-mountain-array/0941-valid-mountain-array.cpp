class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i = 0, n = arr.size();
        while (i<n && i+1<n && arr[i]<arr[i+1])
            i++;
        
        if (i == 0 || i+1 >= n) return false;
        
        while (i<n && i+1<n){
            if (arr[i]<=arr[i+1]) return false;
            i++;
        }
        return true;
    }
};
