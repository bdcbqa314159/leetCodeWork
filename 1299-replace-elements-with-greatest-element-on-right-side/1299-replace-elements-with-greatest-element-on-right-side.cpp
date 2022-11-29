class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int rightMax = -1, newMax = 0, n = arr.size();
        for (int i = n-1; i>=0; i--){
            newMax = max(rightMax, arr[i]);
            arr[i] = rightMax;
            rightMax = newMax;
        }
        return arr;
    }
};