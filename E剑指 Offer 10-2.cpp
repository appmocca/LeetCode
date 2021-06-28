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

class Solution {
public:
    int numWays(int n) {
        // if (!n) return 0 ;
        long long i0 = 0, i1 = 1, ans = 1 ;
        for (int i = 0; i < n; i++){
            ans = i0 + i1 ;
            i0 = i1 ;
            i1 = ans ;
            if (i0 > INT_MAX){
                i0 %= 1000000007 ;
                i1 %= 1000000007 ;
            }
        }
        return ans % 1000000007 ;
    }
};