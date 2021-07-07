class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> record ;
        for (char c : s)    record[c]++ ;
        int ans = 0 ;
        for (auto it : record){
            int value = it.second ;
            ans += value / 2 * 2 ;
            if (value & 1 && !(ans & 1))    ans++ ;
        }
        return ans ;
    }
};