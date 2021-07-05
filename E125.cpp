class Solution {
public:
    bool isPalindrome(string s) {
        string record = "" ;
        for (char c : s)    if (isalnum(c)) record += tolower(c) ;
        string record_rev(record.rbegin(), record.rend());
        return record_rev == record ;
    }
};