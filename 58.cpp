class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size() ;
        int length = 0 ;
        for (int i = len - 1; i >= 0; i--){
            if (length && s[i] == ' ')  break ; //While has the length, breaking when reach a space
            else if (s[i] == ' ') ; //Continue when reach a space
            else length++ ; //If it is a char
        }
        return length ;
    }
};