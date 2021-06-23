class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int compare = 0, maxAns = INT_MIN ;     //maxAns must be INT_MIN, since the answer may be negative
        for (int num : nums){
            compare += num ;
            maxAns = max(maxAns, compare) ;
            if (compare < 0)    compare = 0 ;
        }
        return maxAns ;
    }
};