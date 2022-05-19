class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buy = INT_MAX, n= prices.size();
        for (int i = 0; i<n; i++){
            if (buy>prices[i]) buy=prices[i];
            else profit = max(profit, prices[i]-buy);
        }return profit;
    }
};