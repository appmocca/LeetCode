class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, mPrice = INT_MAX ;
        for (int price : prices){
            if (price < mPrice) mPrice = price ;
            else if (price > mPrice){
                ans += price - mPrice ;
                mPrice = price ;
            }
        }
        return ans ;
    }
};