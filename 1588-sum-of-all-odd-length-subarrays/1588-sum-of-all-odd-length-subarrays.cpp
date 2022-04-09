class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int result = 0, n = arr.size(), end, start, total, odd;
        for (int i = 0; i<n; i++){
            end = i+1;
            start = n-i;
            total = start*end;
            odd = total/2;
            if (total %2 ==1)
                odd++;
            result += odd*arr[i];
        }return result;
    }
};