class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int answer = INT_MIN;
        
        for (auto const &account : accounts){
            int sum = accumulate(account.begin(), account.end(), 0);
            if (sum>=answer) answer = sum;
        }
        
        return answer;
    }
};