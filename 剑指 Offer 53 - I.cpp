class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left  = lower_bound(nums.begin(), nums.end(),target) - nums.begin() ;
        int right = upper_bound(nums.begin(), nums.end(),target) - nums.begin() ;
        return right - left ;
    }
};