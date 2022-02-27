class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int profit = 0;
        int buyPrice = INT_MAX;
        
        for (int i = 0; i<n; i++){
            if(buyPrice > prices[i]){
                buyPrice = prices[i];
            }
            
            else{
                profit = max(profit, prices[i]-buyPrice);
            }
        }
        
        return profit;
        
    }
};