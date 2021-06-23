class Solution {
public:
    int nthUglyNumber(int n) {
        int a = 0, b = 0, c = 0 ;
        int dp[n] ;
        dp[0] = 1 ;     //First ugly number is 1
        for (int i = 1; i < n; i++){
            int n2 = dp[a] * 2, n3 = dp[b] * 3, n5 = dp[c] * 5 ;    //For verifying purpose
            dp[i] = min(min(n2, n3), n5) ;
            if (dp[i] == n2) a++ ;  //If current number is the product of 2, index++
            if (dp[i] == n3) b++ ;  //If current number is the product of 3, index++
            if (dp[i] == n5) c++ ;  //If current number is the product of 5, index++
        }
        return dp[n - 1] ;
    }
};