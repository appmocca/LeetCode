class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1) ; //initialize dp vector
        for (size_t i = 1; i <= n; i++){    //no need to calc sq 0
            int minNum = INT_MAX ;  //reset minNum in every for loop
            for (size_t j = 1; j * j <= i; j++) //breaks when sq j greater than n
                minNum = min(minNum, dp[i - j * j]) ;   //record current best solution
            dp[i] = minNum + 1 ;    //store the best solution that must add 1 since other than sq(j), i need to be considered
        }
        return dp[n] ;  //return required minNum + 1 
    }
};


class Solution {
public:
    bool isPerfectSq(int x){
        int y = sqrt(x) ;
        return y * y == x;
    }

    bool check4(int x){ //Lagrange's four-square theorem
        //n = 4^k * (8 * m + 7) has 4 squares answer
        while (x % 4 == 0)
            x /= 4 ;
        return x % 8 == 7 ;    
    }

    int numSquares(int n) {
        if (isPerfectSq(n)) return 1 ;
        if (check4(n))      return 4 ;
        for (size_t i = 1; i * i <= n; i++){
            int j = n - i * i ;
            if (isPerfectSq(j)) return 2 ;
        }
        return 3 ;
    }
};