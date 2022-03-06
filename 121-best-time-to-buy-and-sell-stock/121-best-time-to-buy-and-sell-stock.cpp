class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buy_price = INT_MAX, profit = 0;
        
        for (int i = 0; i<prices.size(); i++){
            
            if (buy_price > prices[i]){
                buy_price = prices[i];
            }
            
            else{
                profit = max(profit, prices[i]-buy_price);
            }
            
        }
        
        return profit;
        
        
    }
};