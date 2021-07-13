class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int cnt = 1, ans = 0, len = nums.size() ;
        for (int i = 1; i < len; i++){
            if (nums[i] > nums[i-1])    cnt++ ;
            else {
                ans = max(ans, cnt) ;
                cnt = 1 ;
            }
        }
        return max(ans, cnt) ;
    }
};