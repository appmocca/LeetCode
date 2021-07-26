class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> record ;
        for (char c : magazine)     record[c]++ ;
        for (char c : ransomNote){
            if (!record[c]) return false ;
            record[c]-- ;
        }
        return true ;
    }
};