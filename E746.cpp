class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int len = cost.size() ;
        vector<int> dp (len + 1) ;
        dp[0] = dp[1] = 0 ;
        for (int i = 2; i <= len; i++)
            dp[i] = min(dp[i-1] + cost[i-1], dp[i-2] + cost[i-2]) ;
        return dp[len];
    }
};

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int len = cost.size() ;
        int curr = 0, prev = 0 ;
        for (int i = 2; i <= len; i++){
            int tmp = min(curr + cost[i-1], prev+cost[i-2]) ;
            prev = curr ;
            curr = tmp  ;
        }
        return curr ;
    }
};
