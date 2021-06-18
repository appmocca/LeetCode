class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0 ;
        for (size_t i = 0; i < 32; i++){ //The range is 2^32
            if (n & 1)  cnt++ ; //If has 1, cnt++
            n >>= 1 ;   //Move to next digit
        }
        return cnt ;
    }
};