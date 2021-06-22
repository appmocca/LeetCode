// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1 ;
        int right = n ;
        while (left < right){
            int mid = left + (right - left) / 2 ;   //avoiding exceeding the integer range
            if (!isBadVersion(mid)) left = mid + 1 ;    //when its false, make the range to mid-right
            else                    right = mid ;   //when is true, make the range to left-mid
        }
        return left ;   //when while loop breaks, left == right so answer is left
    }
};