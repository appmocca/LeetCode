class Solution {
public:
    int hammingDistance(int x, int y) {
        //Since integer range is 2^32, bitset makes the number becomes 32 digits with leading 0s
        //.count() counting the number of 1s
        return bitset<32> (x ^ y).count() ;
    }
};