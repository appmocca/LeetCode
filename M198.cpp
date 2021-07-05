class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size() ;
        vector<int> dp(len + 1) ;
        dp[0] = 0 ;
        dp[1] = nums[0] ;
        for (int i = 2; i <= len; i++)
            dp[i] = max(dp[i-1], nums[i-1] + dp[i - 2]) ;
        return dp[len] ;
    }
};

class Solution {
public:
    int rob(vector<int>& nums) {
        int curr = 0, prev = 0 ;
        for (int num : nums){
            int temp = max(curr, prev + num) ;
            prev = curr ;
            curr = temp ;
        }
        return curr ;
    }
};