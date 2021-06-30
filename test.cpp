class Solution {
public:
    int findNthDigit(int n) {
        int base = 9, digit = 1 ;
        int num = 0 ;
        while (n < base * digit){
            n -=  base * digit ;
            num += base * digit ;
            base *= 10;
            digit++ ;
        }
        num += (num - 1) / digit + 1 ;
        int idx  = (num - 1) % digit + 1 ;
        while (digit-- > idx)   num /= 10 ;
        return num % 10 ;
    }
};