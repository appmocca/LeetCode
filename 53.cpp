//Dynamic shifting
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxAns = nums[0], compare = 0 ;
        for (int num : nums){
            compare = max(num, compare + num) ;
            maxAns = max(compare, maxAns) ;
        }
        return maxAns ;
    }
};