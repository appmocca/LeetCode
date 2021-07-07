class Solution {
public:
    int arrangeCoins(int n) {
        if (n == 1)    return 1 ;
        long long cnt = 0 ;
        for (int i = 1; i <= n; i++){
            cnt += i ;
            if (cnt > n)    return i - 1 ;
        }
        return -1 ;
    }
};

class Solution {
public:
    // ((1+x)*x)/2 <= n -> x <= (sqrt(8*n+x)-1)/2
    using ll = long long;
    int arrangeCoins(int n) {
        return (int)(sqrt((ll)8*n + 1) - 1) >> 1;
    }
};