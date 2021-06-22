class Solution {
public:
    int mySqrt(int x) {
        int lo = 0, hi = x ;
        while (lo <= hi){
            long long mid = lo + (hi - lo) / 2 ;
            long long sq = mid * mid ;
            if (sq > x)      hi = mid - 1 ;
            else if (sq < x) lo = mid + 1 ;
            else             return mid ;
        }
        return hi ;
    }
};