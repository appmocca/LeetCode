class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> record(nums.begin(), nums.end()) ;
        int len = nums.size() ;
        for (int i = 0; i <= len; i++)  if (!record.count(i)) return i ;
        return 0 ;
    }
};

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Gauss' law
        int len = nums.size() ;
        int expectedSum = len * (len + 1) / 2 ;
        int actualSum   = accumulate(nums.begin(), nums.end(), 0) ;
        return  expectedSum - actualSum;
    }
};

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // XOR
        int len = nums.size() ;
        for (int i = 0; i < nums.size(); i++) len ^= nums[i] ^ i ;
        return len ;
    }
};