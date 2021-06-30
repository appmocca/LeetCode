class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1 = num1.length() - 1, len2 = num2.length() - 1, carry = 0 ;
        //The length must be correct
        string ans = "" ;
        while (len1 >= 0 || len2 >= 0 || carry){
            int x = len1 >= 0 ? num1[len1] - '0' : 0 ;
            int y = len2 >= 0 ? num2[len2] - '0' : 0 ;
            int sum = x + y + carry ;
            ans.push_back('0' + sum % 10) ;
            carry = sum / 10 ;
            len1--; len2-- ;    //Must make self-substration
        }
        reverse(ans.begin(), ans.end()) ;
        return ans ;
    }
};