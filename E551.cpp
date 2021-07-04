class Solution {
public:
    bool checkRecord(string s) {
        int Acnt = 0, Lcnt = 0 ;
        for (char c : s){
            if (c == 'L') Lcnt++ ;
            if (c != 'L') Lcnt = 0 ;       //If L breaks and not continued
            if (c == 'A') Acnt++ ;
            if (Lcnt > 2) return false ;
        }
        return Acnt < 2 ;
    }
};