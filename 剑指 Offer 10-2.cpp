class Solution {
public:
    int dp[108] ;
    int numWays(int n) {
        if (n <= 1)
            dp[n] = 1 ;
        if (!dp[n])
            dp[n] = (numWays(n - 1) + numWays(n - 2)) % 1000000007 ;
        return dp[n];
    }
};