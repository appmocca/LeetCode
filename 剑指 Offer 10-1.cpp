class Solution {
public:
    int fib(int n) {
        if (n <= 1)
            return n ;
        long f0 = 0, f1 = 1, f2 = 0 ;
        for (size_t i = 1; i < n; i++){
            f2 = f0 + f1 ;
            f0 = f1 ;
            f1 = f2 ;
            if (f0 > INT_MAX){
                f1 %= 1000000007 ;
                f0 %= 1000000007 ;
            }
        }
        return f2 % 1000000007 ;
    }
};