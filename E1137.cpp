class Solution {
public:
    int tribonacci(int n) {
        int a = 0, b = 1, c = 1, ans = 2 ;
        if (!n) return n ;
        if (n == 1) return 1 ;
        if (n == 2) return 1 ;
        for (int i = 3; i < n; i++){
            a = b ;
            b = c ;
            c = ans ;
            ans = a + b + c ;
        }
        return ans ;
    }
};