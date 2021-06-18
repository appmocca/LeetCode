class Solution {
public:
    bool isPalindrome(int x) {
        //Palindrome Number means reversed number must be equaled to original one
        if (x < 0)  return false ;  //Negative are false
        int copyX = x ; //Copying the original x
        int sum = 0 ;
        while (copyX){
            int reminder = copyX % 10 ;
            copyX /= 10 ;
            if ((sum > INT_MAX / 10 || (sum == INT_MAX / 10 && reminder > 7))   //If exceed the limit, return false
                || (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && reminder < -8)))  return false ;  
            sum = sum * 10 + reminder ;
        }
        return sum == x ;
    }
};