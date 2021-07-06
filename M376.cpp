class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        //In this case, no need to set max ans since the result does not requires subset
        int currDiff = 0, prevDiff = 0, ans = 1 ;
        for (int i = 1; i < nums.size(); i++){
            currDiff = nums[i] - nums[i-1] ;
            if ((currDiff > 0 && prevDiff <= 0) || (currDiff < 0 && prevDiff >= 0)){
                ans++ ;
                prevDiff = currDiff ;
            }
        }
        return ans ;
    }
};