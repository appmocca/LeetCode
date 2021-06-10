class Solution {
public:
    int dp[108] ;
    int climbStairs(int n) {
        if (n <= 1)
            dp[n] = 1 ;
        if (!dp[n])
            dp[n] = climbStairs(n-1) + climbStairs(n - 2) ;
        return dp[n] ;
    }
};