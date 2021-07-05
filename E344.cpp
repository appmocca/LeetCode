class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size() - 1 ;
        for (int i = 0, j = len; i < j; i++,j--)   swap(s[i], s[j]) ;
    }
};