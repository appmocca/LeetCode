class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size() - 1 ;
        for (int i = len; i >= 0; i--){
            if (i == len)   digits[i]++ ;   //If i is current tailing number, just add 1
            if(digits[i] > 9){  //If the digit greater than 9
                digits[i] = 0 ; //Making current to 0
                if (i)  digits[i - 1]++ ;   //Adding previous digit if i is not the first digit
                else digits.insert(digits.begin(), 1) ; //If not, insert a 1 at the front
            }
            else break ;    //If the digit is less than 10, just break and return digits
        }
        return digits ;
    }
};