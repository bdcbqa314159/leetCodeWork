class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n<=1) return 0;
        int buy = prices[0], profit = 0;
        for (int i = 1; i<n; i++){
            if (prices[i-1]>prices[i]){
                profit+=prices[i-1]-buy;
                buy = prices[i];
            }
        }
        profit += prices[n-1]-buy;
        return profit;
    }
};