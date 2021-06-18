class Solution {
public:
    bool isPowerOfThree(int n) {
        return n > 0 && 1162261467 % n == 0 ;   //In the range of positive integer, 1162261467 is the greatest product of 3
    }
};