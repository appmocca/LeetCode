class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN, imax = 1, imin = 1 ;
        for (int num : nums){
            if (num < 0){           //Swapping the number if the current number less than 0
                int tmp = imax ;    //Must be imax switching imin
                imax = imin ;
                imin = tmp  ;
            }
            imax = max(imax * num, num) ;
            imin = min(imin * num, num) ;   //Since the number has negative value, if next number is negative, imin will has the max product
            ans  = max(ans, imax) ;
        }
        return ans ;
    }
};