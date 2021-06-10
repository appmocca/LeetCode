class Solution {
public:
    bool isUnique(string astr) {
        if (astr.size() == 0)
            return true ;
        unordered_set<char> compare ;
        for (auto ch : astr) {
            if (compare.find(ch) == compare.end())
                compare.insert(ch) ;
            else 
                return false;
        }
        return true;
    }
};