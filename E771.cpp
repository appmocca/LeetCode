class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> record ;
        int ans = 0 ;
        for (char c : stones)   record[c]++ ;
        for (char c : jewels)   ans += record[c]; 
        return ans ;
    }
};