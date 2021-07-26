class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP = INT_MAX, maxP = INT_MIN ;
        for (int price : prices) {
            minP = min(minP, price) ;
            maxP = max(maxP, price - minP) ;
        }
        return maxP ;
    }
};