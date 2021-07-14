class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        int mod = (int)1e9+7 ;
        vector<int> sorted = nums1 ;
        sort(sorted.begin(), sorted.end()) ;
        long sum = 0 ;
        int  len = nums1.size(), maxdiff = 0 ;
        for (int i = 0; i < len; i++){
            int a = nums1[i], b = nums2[i] ;
            if (a == b) continue ;  //Do nothing if a equals to b
            int delta = (abs)(a - b) ;  //Record the abs value
            sum += delta ;  //Record current sum of abs values
            int lo = 0, hi = len - 1 ;
            while (lo < hi) {
                int mid = (lo + hi + 1) / 2 ;
                if (sorted[mid] >= b)    hi = mid - 1 ;
                else lo = mid ; //Finding the closest value in sorted
            }
            int nd = (abs)(sorted[hi] - b) ;    //New difference
            if (hi + 1 < len) nd = min(nd, (abs)(sorted[hi + 1] - b)) ; //If not exceed the boundry
            if (nd < delta) maxdiff = max(maxdiff, delta - nd) ;    //If new difference less than original abs value, need to update the max difference
        }
        return (int)((sum - maxdiff) % mod) ;   //The sum - max asb difference is the answer
    }
};