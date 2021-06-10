class Solution {
public:
    char firstUniqChar(string s) {
        unordered_map<char,int> compare ;
        for (auto ch : s)
            compare[ch]++ ;
        for (size_t i = 0; i < s.size(); i++)
            if (compare[s[i]] == 1)
                return s[i] ;
        return ' ' ;
    }
};