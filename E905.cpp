class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans ;
        for (int num : nums)    if (!(num & 1))   ans.push_back(num) ;
        for (int num : nums)    if (  num & 1)    ans.push_back(num) ;
        return ans ;
    }
};

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l = 0, r = nums.size() - 1 ;
        while (l < r){
            if ((nums[l] & 1) > (nums[r] & 1)){
                int tmp = nums[l] ;
                nums[l] = nums[r] ;
                nums[r] = tmp ;
            }
            if (!(nums[l]&1))    l++ ;
            if ( (nums[r]&1))    r-- ;
        }
        return nums ;
    }
};