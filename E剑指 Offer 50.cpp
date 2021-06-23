class Solution {
public:
    char firstUniqChar(string s) {
        unordered_map<char,int> record ;
        for (char ch : s)   record[ch]++ ;
        for (char ch : s)   if (record[ch] == 1)    return ch ;
        return ' ' ;
    }
};