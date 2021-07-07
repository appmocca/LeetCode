class Solution {
static bool compare(int a, int b){
        return abs(a) > abs(b) ;
    }

public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), compare) ;   //Sorting by abs value in decending sequence
        int len = nums.size() ;
        for (int i = 0; i < len; i++){  //Filping the max values
            if (nums[i] < 0 && k > 0){
                nums[i] *= -1 ;
                k-- ;
            }
        }
        while (k--) nums[len - 1] *= -1 ;//If k remains greater than 0, filping the last index value
        return accumulate(nums.begin(), nums.end(), 0) ;    //return the sum of all numbers
    }
};