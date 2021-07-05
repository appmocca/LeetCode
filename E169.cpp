class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        return nums[nums.size() / 2] ;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> record ;
        for (int num : nums)    record[num]++ ;
        int ans = INT_MIN, compare = 0 ;
        for (int num : nums){
            int tmp = compare ;
            compare = max(compare, record[num]) ;
            if (tmp != compare)
                ans = num ;
        }    
        return ans ;
    }
};