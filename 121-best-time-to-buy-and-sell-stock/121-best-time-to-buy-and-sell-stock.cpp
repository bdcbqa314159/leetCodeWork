class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buyPrice = INT_MAX, n = prices.size();
        for (int i = 0; i<n; i++){
            if (buyPrice>prices[i]) buyPrice=prices[i];
            else profit = max(profit, prices[i]-buyPrice);
        }return profit;
    }
};