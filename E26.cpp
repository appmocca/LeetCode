class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase(unique(nums.begin(), nums.end()), nums.end()) ;
        return nums.size() ;
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size(), lo = 0 ;
        if (!len || len == 1)   return len ;
        for (int hi = 0; hi < len; hi++)
            if (nums[hi] != nums[lo])   nums[++lo] = nums[hi] ;
        return lo + 1 ;
    }
};