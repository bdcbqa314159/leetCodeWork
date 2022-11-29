class Solution {
public:
    bool validMountainArray(vector<int>& a) {
        int n = a.size(), i = 0;
        while (i<n && i+1<n && a[i]<a[i+1])
            i++;
        if (i == 0 || i>=n-1) return false;
        
        while (i<n && i+1<n){
            if (a[i]<=a[i+1]) return false;
            i++;
        }
        
        return true;
    }
};