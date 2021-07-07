class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int cnt = 0 ;
        int num = 0 ;
        int len = word.size() ;
        for (char c : abbr){
            if (isdigit(c)){
                if (num == 0 && c == '0')   return false ;  //Must be no leading zeros
                num = num * 10 + (c - '0') ;
            } 
            else if (isalpha(c)){
                cnt += num + 1 ;
                num  = 0 ;
                if (cnt > len || c != word[cnt - 1]) return false ; //Return false if the number does not match or current char is not same as original string with same index
            }
        }
        return cnt + num == len ;   //If the last char of abbr is digit
    }
};