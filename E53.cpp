public:
    int maxSubArray(vector<int>& nums) {
        int compare = 0, maxSum = nums[0] ;
        for (int num : nums){
            compare = max(compare + num, num) ;
            maxSum = max(maxSum, compare) ;
        }
        return maxSum ;
    }
};