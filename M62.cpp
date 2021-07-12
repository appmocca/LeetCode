class Solution {
public:
    int uniquePaths(int m, int n) {
        // 当前位置只能「往下」移动，即有 f[i][j] = f[i-1][j]f[i][j]=f[i−1][j]
        // 当前位置只能「往右」移动，即有 f[i][j] = f[i][j-1]f[i][j]=f[i][j−1]
        // 当前位置即能「往下」也能「往右」移动，即有 f[i][j] = f[i][j-1] + f[i-1][j]f[i][j]=f[i][j−1]+f[i−1][j]
        vector<vector<int>> dp(m+1,vector<int>(n+1)) ;
        dp[1][0] = 1 ;
        for (int i = 1; i <= m; i++)
            for(int j = 1; j <= n; j++)
                dp[i][j] = dp[i-1][j] + dp[i][j-1] ;
        return dp[m][n] ;
    }
};