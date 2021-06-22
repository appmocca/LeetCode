class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        int len = nums.size() ;
        return (nums[len - 1] - 1) * (nums[len - 2] - 1) ;
    }
};

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 0, max2 = 0 ;
        int len = nums.size() ;
        for (int num : nums){
            if (num > max1){
                max2 = max1 ;
                max1 = num ;
            }else if(num > max2)
                max2 = num ;
        }
        return (max1 - 1) * (max2 - 1) ;
    }
};