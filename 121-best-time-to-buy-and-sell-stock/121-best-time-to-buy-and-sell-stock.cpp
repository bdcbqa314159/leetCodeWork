class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0, buyPrice = INT_MAX;
        
        for (int i = 0; i<prices.size(); i++){
            if (buyPrice > prices[i]) buyPrice = prices[i];
            else profit = max(profit, prices[i]-buyPrice);
        }
        
        return profit;
    }
};