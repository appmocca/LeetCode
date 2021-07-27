class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size() ;
        if (len == 1)   return nums[0] ;
        int curr1 = 0, prev1 = 0, curr2 = 0, prev2 = 0 ;
        for (int i = 0; i < len -1 ; i++){
            int temp = max(curr1, prev1 + nums[i]) ;
            prev1 = curr1 ;
            curr1 = temp ;
        }
        for (int i = 1; i < len ; i++){
            int temp = max(curr2, prev2 + nums[i]) ;
            prev2 = curr2 ;
            curr2 = temp ;
        }
        return max(curr1, curr2) ;
    }
};