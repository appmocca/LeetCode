class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end()) ;
        int ans = 0 ;
        for (int cost : costs){
            int tmp = coins - cost ;
            if (tmp >= 0){
                coins -= cost ;
                ans++ ;
            }
            else break ;
        }
        return ans ;
    }
};