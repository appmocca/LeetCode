class Solution {
public:
    string replaceSpace(string s) {
        string ans ;
        for (size_t i = 0; i < s.size(); i++){
            if (s[i] == ' '){
                ans.push_back('%') ;
                ans.push_back('2') ;
                ans.push_back('0') ;
            }
            else
                ans.push_back(s[i]) ;
        }
        return ans ;
    }
};