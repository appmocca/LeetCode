class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size() ;
        int len2 = nums2.size() ;
        if (len1 > len2)  return findMedianSortedArrays(nums2, nums1) ;
        int LMax1, LMax2, RMin1, RMin2, C1, C2, lo = 0, hi = 2 * len1 ;

        while (lo <= hi){
            C1 = (hi + lo) >> 1 ;
            C2 = len1 + len2 - C1 ;

            LMax1 = !C1 ?            INT_MIN : nums1[(C1 - 1) / 2] ;
            RMin1 = C1 == 2 * len1 ? INT_MAX : nums1[C1 / 2] ;
            LMax2 = !C2 ?            INT_MIN : nums2[(C2 - 1) / 2] ;
            RMin2 = C2 == 2 * len2 ? INT_MAX : nums2[C2 / 2] ;

            if      (LMax1 > RMin2) hi = --C1 ;
            else if (LMax2 > RMin1)  lo = ++C1 ;
            else break ;
        }
        return (max(LMax1, LMax2) + min(RMin1, RMin2)) / 2.0 ;
    }
};

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> combine ;
        for (int num : nums1)   combine.push_back(num) ;
        for (int num : nums2)   combine.push_back(num) ;
        sort(combine.begin(), combine.end()) ;
        int len = combine.size() ;
        if (len == 1)   return combine[0] ;
        else if (len & 1)    return (double)combine[len/2] ;
        else            return (double)(combine[len/2] + combine[len/2-1])/2 ;
    }
};