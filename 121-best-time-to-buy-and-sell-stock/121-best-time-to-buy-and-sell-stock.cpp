class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        int n = prices.size();
        int buyPrice = INT_MAX;
        
        for (int i = 0; i<n; i++){
            if(buyPrice>prices[i])
                buyPrice = prices[i];
                
            else
                profit = max(profit, prices[i]-buyPrice);
        }
        
        return profit;
        
    }
};