class Solution {
public:
    int findNthDigit(int n) {
        long base = 9, digitLevel = 1 ;
        int num = 0 ;
        while (n > base * digitLevel){
            n -= base * digitLevel ;
            num += base ;
            base *= 10 ;
            digitLevel++ ;
        }
        num += (n - 1)/digitLevel + 1 ;
        int reminder = --n % digitLevel + 1 ;
        while (digitLevel-- > reminder)     num /= 10 ;
        return num%10 ;
    }
};