class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size() ;
        int lo = 0 ;
        for (int hi = 0; hi < len; hi++) {
            if (nums[hi] != val) {
                nums[lo] = nums[hi];
                lo++;
            }
        }
        return lo;
    }
};