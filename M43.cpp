class Solution {
public:
    string multiply(string num1, string num2) {
        int len1 = num1.length(), len2 = num2.length() ;
        string ans(len1 + len2, '0') ;
        for (int i = len1 - 1; i >= 0; i--)
            for (int j = len2 - 1; j >= 0; j--){
                int sum = (num1[i] - '0') * (num2[j] - '0') + (ans[i+j+1] - '0') ;
                ans[i+j+1] = sum % 10 + '0' ;
                ans[i+j]  += sum / 10 ;
            }
        for (int i = 0; i < len1 + len2; i++)   if (ans[i] != '0')  return ans.substr(i) ;
        return "0" ; 
    }
};