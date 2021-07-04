class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        int len = nums.size() ;
        int ans = 0 ;
        for (int i = 0; i  < len; i+=2)
            ans += min(nums[i],nums[i+1]) ;
        return ans ;
    }
};