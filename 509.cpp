class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0 ;
        if (n == 1) return 1 ;          //Still need to setup boundry return value
        int p = 0, q = 1, ans = 1 ;     
        for (size_t i = 2; i < n; i++){ //Dynamic shifting
            p = q ;
            q = ans ;
            ans = p + q ;
        }
        return ans ;
    }
};