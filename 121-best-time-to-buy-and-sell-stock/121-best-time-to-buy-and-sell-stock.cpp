class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buyPrice = INT_MAX;
        
        for (int price: prices){
            if (buyPrice>price){
                buyPrice = price;
            }
            else{
                profit = max(profit, price-buyPrice);
            }
        }
        
        return profit;
    }
};