class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size(), newMax = 0, rightMax = -1;
        for (int i = n-1; i>=0; i--){
            newMax = max(arr[i], rightMax);
            arr[i] = rightMax;
            rightMax = newMax;
        }return arr;
    }
};