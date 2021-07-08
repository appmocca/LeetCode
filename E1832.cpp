class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> record(sentence.begin(), sentence.end()) ;
        for (char c = 'a'; c <= 'z'; c++)   if (!record.count(c))   return false ;
        return true ;
    }
};