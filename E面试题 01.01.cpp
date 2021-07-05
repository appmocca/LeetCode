class Solution {
public:
    bool isUnique(string astr) {
        unordered_set<char> record ;
        for (char c : astr){
            if(record.count(c)) return false ;
            record.insert(c) ;
        }
        return true ;
    }
};