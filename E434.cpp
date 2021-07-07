class Solution {
public:
    int countSegments(string s) {
        //Beware of "" && "     "
        int cnt = 0 ;
        for (int i = 0; i < s.size(); i++)
            if ((i==0 || s[i-1] == ' ') && s[i] != ' ') cnt++ ;
        return cnt ;
    }
};