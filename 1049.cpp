class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int sum = accumulate(stones.begin(), stones.end(), 0) ;
        int mid = sum / 2 ;
        vector<int> dp(mid + 1) ;
        for (int i = 1; i <= stones.size(); i++)    //i represents iteration 
            for (int j = mid; j >= stones[i - 1]; j--)  //j represents mid weight
                if (j >= stones[i - 1])
                    dp[j] = max(dp[j], (dp[j - stones[i -1]] + stones[i - 1])) ;
        return sum - 2 * dp[mid] ;
    }
};