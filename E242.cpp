class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end()) ;
        sort(t.begin(), t.end()) ;
        return s == t ;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> rs ;
        unordered_map<char, int> rt ;
        for (char c : s)    rs[c]++ ;
        for (char c : t)    rt[c]++ ;
        return rs == rt ;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())   return false ;
        unordered_map<char,int> record ;
        for (char c : s)    record[c]++ ;
        for (char c : t){
            if (!record[c]) return false ;
            record[c]-- ;
        }    
        return true ;
    }
};