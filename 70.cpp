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

class Solution {
public:
    int climbStairs(int n) {
        int p = 0, q = 0, ans = 1 ;
        for (int i = 0; i < n; i++){
            p = q ;
            q = ans ;
            ans = p + q ;
        }
        return ans ;
    }
};