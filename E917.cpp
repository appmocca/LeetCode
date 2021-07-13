class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<char> record ;
        for (char c : s)    if (isalpha(c)) record.push_back(c) ;
        reverse(record.begin(), record.end()) ;
        int pos = 0 ;
        for (int i = 0; i < s.size(); i++)
            if (isalpha(s[i]))  s[i] = record[pos++] ;
        return s ;
    }
};