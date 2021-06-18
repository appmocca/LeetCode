class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0)   return "0" ;      //Dealing with exceptions
        string ans = "";                  //Initialize the return value
        bool isNegative = false ;         //Initialize the determine boolean
        if (num < 0)    isNegative = true ;
        while (num != 0){                 //While loop ends when num become 0
            ans += (abs(num) % 7) + '0' ;
            num /= 7 ;
        }
        if (isNegative) ans += '-' ;      //Adding negative sign if the original num is negative
        reverse(ans.begin(), ans.end()) ; //Reversing return ans 
        return ans ;
    }
};