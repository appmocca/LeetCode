#define LL long long
class Solution {
private:
    LL isGoodNum(LL mid, int m, LL number){
        LL num = 0 ;
        for (int i = 0; i < m; i++){
            num = num * mid + 1 ;
            //If the number exceed the range of [m-1, (number - 1) / mid]
            if (i < m - 1 && num > (number - 1) / mid)    return number + 1 ;
        }
        return num ;
    }

public:
    string smallestGoodBase(string n) {
        LL num = stoll(n) ;
        //The last possibile solution is the number - 1, get 11 as the result
        LL ans = num - 1 ;
        //Since the 2^60 is much more than 10^18
        //The answer is 1s, so the range is [2,60]
        for (int i = 2; i < 60; i++){
            LL lo = 2, hi = num - 1 ;
            while (lo < hi){
                LL mid = lo + (hi - lo) / 2;
                LL tmp = isGoodNum(mid, i, num) ;
                if (tmp == num)        return to_string(mid) ;
                else if (tmp < num)    lo = mid + 1 ;
                else                   hi = mid ; 
            } 
        }
        return to_string(ans) ;
    }
};