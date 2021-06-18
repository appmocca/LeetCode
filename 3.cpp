class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.size() ;
        int ans = 0 ;
        unordered_set<char> compare ;
        int left = 0 ;
        for (int i = 0; i < len; i++){
            while (compare.find(s[i]) != compare.end()){    //Deleting duplicated char
                compare.erase(s[left]) ;                    //Deleting left char
                left++ ;                                    //Pushing left pointer
            }
            ans = max(ans, i - left + 1) ;                  //Update longest length of substring
            compare.insert(s[i]) ;                          //Inserting current char into compare
        }
        return ans ;
    }
};