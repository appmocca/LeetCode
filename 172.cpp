class Solution {
public:
    int trailingZeroes(int n) {
        //5! = 5 * 4 * 3 * 2 * 1 = 120, the tailing zero is from 2 * 5
        //So finding 2s & 5s will find the answer
        //5s is much less than 2s, so need to find 5s(while(n%5==0) -> n/=5, cnt++)
        //11! = 11 * (2 * 5) * 9 .... * (1 * 5) ...
        //11! has the 2 tailing zeros, because it has two 5s
        //When number increasing, (2 * 5 * 5)...(1 * 5 * 5)... -> every 25 need cnt++
        //When number is huge, eg (2 * 5 * 5 * 5) -> every 125 need cnt++
        //So on, 3 * 5 * 5 * 5 * 5 need cnt++
        //So cnt need make cnt += n / 5 firstly because the number will exceed the limit
        int cnt = 0 ;
        while (n){
            cnt += n / 5 ;
            n /= 5 ;
        }
        return cnt ;
    }
};