class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int answer = INT_MIN,  n = accounts.size();
        for (int i = 0; i<n; i++){
            int s = accumulate(accounts[i].begin(),accounts[i].end(),0);
            if (s>=answer) answer = s;
        }
        return answer;
    }
};