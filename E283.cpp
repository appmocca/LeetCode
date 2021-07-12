class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> record ;
        int len = nums.size() ;
        for (int num : nums)    if (num != 0)   record.push_back(num) ;
        int relen = record.size() ;
        for (int i = 0; i < relen; i++) nums[i] = record[i] ;
        for (int i = relen; i < len; i++) nums[i] = 0 ;
    }
};

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0, fast = 0, len = nums.size() ;
        while (fast < len){
            if (nums[fast]) swap(nums[slow++], nums[fast]) ;
            fast++ ;
        }
    }
};