class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> record(candyType.begin(), candyType.end()) ;
        return min(record.size(), candyType.size()/2) ;
    }
};