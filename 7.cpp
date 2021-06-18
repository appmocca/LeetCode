class Solution {
public:
    int reverse(int x) {
        int ans = 0 ;
        while (x){
            int reminder = x % 10 ;
            x /= 10 ;
            if ((ans > INT_MAX / 10 || (ans == INT_MAX / 10 && reminder > 7))   //Int range is -2147483648 to 2147483647
                ||(ans < INT_MIN / 10 || (ans == INT_MIN / 10 && reminder < -8)))   return 0 ;
            ans = ans * 10 + reminder ; //After verification, make the reverse
        }
        return ans ;
    }
};