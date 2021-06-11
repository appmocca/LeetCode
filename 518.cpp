class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount + 1) ;    //initialize the return vector
        dp[0] = 1 ; //setup the anchor when amount is 0 has 1 solution
        for (int coin : coins)
            for (size_t i = coin; i <= amount; i++)
                dp[i] += dp[i - coin] ; 
                //updating count in this order
                //when coin == 1 -> 1+1+1+1+1 -> dp[5] += 1
                //when coin == 2 -> 2+dp[3] -> 2+1+1+1; 2+2+1 -> dp[5] += 2
                //when coin == 5 -> dp[0] = 1 -> dp[5] += 1
        return dp[amount] ;
    }
};