class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> record ;
        for (char c: s) record[c]++ ;
        for (int i = 0; i < s.size(); i++)  if (record[s[i]] == 1)  return i ;
        return -1 ;
    }
};