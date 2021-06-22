class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int compare = 0 ;
        for (int i = 0; i < k; compare += nums[i], i++);
        int maxSum = compare ;
        for (int i = k; i < nums.size(); i++){
            compare -= nums[i-k] - nums[i] ;
            maxSum = max(compare, maxSum) ;
        }
        return (double)maxSum / k ;
    }
};