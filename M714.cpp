class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int profit = 0, minPrice = INT_MAX ;
        for (int price : prices){
            if (price + fee < minPrice) minPrice = price + fee ;
            else if (price > minPrice){
                profit  += price - minPrice ;
                minPrice = price ;
            }
        }
        return profit ;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        int holdStock = (-1) * prices[0] ; 
        int saleStock = 0 ; 
        for (int i = 1; i < n; i++) {
            int previousHoldStock = holdStock ;
            holdStock = max(holdStock, saleStock - prices[i]) ;
            saleStock = max(saleStock, previousHoldStock + prices[i] - fee);
        }
        return saleStock;
    }
};