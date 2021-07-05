class Solution {
public:
    string compressString(string S) {
        string ans = "" ;
        int len = S.size() ;
        int cnt = 0 ;
        char tmp = S[0];
        for (char c : S){
            if (c == tmp)   cnt++ ;
            else {
                ans += tmp + to_string(cnt) ;
                tmp = c ; cnt = 1 ;
            }
        }
        ans += tmp + to_string(cnt) ;
        return ans.size() >= len ? S : ans ;
    }
};