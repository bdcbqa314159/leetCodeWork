class Solution {
public:
    
    void helper(int i,vector<int>&arr){
        int N = arr.size();
        for (int j = N-1; j>i; j--)
            arr[j] = arr[j-1];
        return;
    }
    
    void duplicateZeros(vector<int>& arr) {
        int N = arr.size();
        for (int i = 0; i<N; i++){
            if (arr[i] == 0){
                helper(i, arr);
                i++;
            }
        }
        return;
    }
};