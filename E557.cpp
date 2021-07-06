class Solution {
public:
    string reverseWords(string s) {
        int spaceIndex = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == ' '){
                reverse(s.begin()+spaceIndex, s.begin()+i) ;
                spaceIndex = i+1 ;
            }
        }
        reverse(s.begin()+spaceIndex, s.end()) ;
        return s ;
    }
};