class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        sort(s1.begin(), s1.end()) ;
        sort(s2.begin(), s2.end()) ;
        return s1 == s2 ;
    }
};

class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        unordered_map<char, int> record ;
        unordered_map<char, int> compare ;
        for (char c : s1)   record[c]++ ;
        for (char c : s2)   compare[c]++ ;
        return record == compare ;
    }
};