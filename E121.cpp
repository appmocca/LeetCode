class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = INT_MIN, minP = INT_MAX ;
        for (int i = 0; i < prices.size(); i++){
            minP = min(minP, prices[i]) ;       //Minimal update first
            maxP = max(maxP, prices[i] - minP) ;
        }
        return maxP ;
    }
};