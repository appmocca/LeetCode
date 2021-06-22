class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size() ;
        int lo = 0, hi = len - 1 ;
        while (lo <= hi){
            int mid = lo + (hi - lo) / 2 ;
            if (nums[mid] == target)         return mid ;
            else if (nums[mid] > target)     hi = mid - 1;
            else                             lo = mid + 1 ;
        }
        return lo ;
    }
};

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size() ;
        int i = 0 ;
        for (int num : nums){
            if (num == target || num > target)
                return i ;
            i++ ;
        }
        return target < nums[0]? 0 : len ;
    }
};