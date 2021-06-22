class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        int len = nums.size() - 1 ;
        return max((nums[len] * nums[len - 1] * nums[len - 2]), (nums[0] * nums[1] * nums[len])) ;
    }
};