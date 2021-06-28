class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.size() ;
        int cnt = 0 ;
        for (char ch : word)    if (ch < 97)    cnt++ ; //Couting letter in upper case
        if (cnt == 0 || (cnt == 1 && (word[0] < 97)) || cnt == len)     return true ;   //If all lower case, all upper case & only first one is upper case
        return false ; 
    }
};