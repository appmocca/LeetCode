class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size() ;
        int sum = 0 ;
        int ans = INT_MIN ;
        for (size_t i = 0; i < len; i++){
            sum += nums[i] ;
            ans = max(sum, ans) ;
            if (sum < 0)
                sum = 0 ;
        }
        return ans ;
    }
};