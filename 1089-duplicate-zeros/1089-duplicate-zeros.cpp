class Solution {
public:
    
    void helper(int j, vector<int>& a){
        int n = a.size();
        for (int i = n-1; i>j; i--){
            a[i] = a[i-1];
        }
        return;
    }
    
    
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i<n; i++){
            if (arr[i] == 0){
                helper(i, arr);
                i++;
            }
        }
        return;
    }
};