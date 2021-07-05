class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> record(nums.begin(), nums.end()) ;
        for (int i = 0; i < nums.size(); i++) if (!record.count(i)) return i ;
        return nums.size() ;
    }
};

// Dividing
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int lo = 0, hi = nums.size() - 1 ;
        while (lo < hi){
            int mid = lo + (hi - lo) /2 ;
            if (nums[mid] != mid)   hi = mid ;
            else lo = mid + 1 ;
        }
        if (nums[hi] == hi) hi++ ;
        return hi ;
    }
};