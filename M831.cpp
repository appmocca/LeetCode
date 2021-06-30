class Solution {
public:
    string maskPII(string s) {
        string ans = "" ;
        if (s.find("@") != string::npos){
            for (int i = 0; i < s.length(); i++)    if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 'a' - 'A' ;
            ans += s[0]; ans += "*****" ;
            for (int i = 1; i < s.length(); i++){
                if (s[i+1] == '@')   return ans += s.substr(i) ;
            }
        }

        string num = "" ;
        for (char c : s) if (c >= '0' && c <= '9') num += c ;
        if (num.length() == 10)         ans = "***-***-" + num.substr(6) ;
        else if (num.length() == 11)    ans = "+*-***-***-" + num.substr(7) ;
        else if (num.length() == 12)    ans = "+**-***-***-" + num.substr(8) ;
        else if (num.length() == 13)    ans = "+***-***-***-" + num.substr(9) ;
        return ans ;
    }
};