class Solution {
public:
    bool isStraight(vector<int>& nums) {
        unsigned short pivot = 0, bit = 1 ;
        short l = 14, r = -1 ;
        for (short n : nums){
            if (n == 0)
                continue ;
            bit = 1 ;
            short move_num = n ;
            while (move_num--)
                bit <<= 1 ;
                if ((pivot & bit) == 0)
                    pivot ^= bit ;
                else
                    return false ;
                if (n < l)
                    l = n ;
                if (n > r)
                    r = n ; 
        }
        if (r - l + 1 > 5)
            return false ;
        return true ;
    }
};