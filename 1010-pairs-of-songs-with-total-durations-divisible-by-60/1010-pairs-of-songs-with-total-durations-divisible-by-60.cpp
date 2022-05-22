class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0;
        vector<int> rem2count(60,0);
        
        for (int i = 0; i<time.size(); i++){
            int rem = time[i]%60;
            if (!rem) count += rem2count[0];
            else count +=rem2count[60-rem];
            rem2count[rem]++;
        }
        return count;
    }
};