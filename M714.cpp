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