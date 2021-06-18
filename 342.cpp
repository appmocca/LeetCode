class Solution {class Solution {
public:
    bool isPowerOfFour(int n) {
        // n must great than 0
        // (n & (n - 1)) checking if the number is the power of 2
        // eg: 4 & 3 -> 100 & 011 = 000, so 4 is the power of 2
        //  n % 3 == 1 checking if the number is the power of 4
        return n > 0 && (n & (n - 1)) == 0 && n % 3 == 1 ;
    }
};