class Solution {
public:
    string maskPII(string s) {
        string ans = "" ;
        if (s.find("@") != string::npos){
            for (int i = 0; i < s.length(); i++) if (s[i] >= 'A' && s[i] <= 'Z')  s[i] ^= 32 ;
            ans += s[0]; ans += "*****" ;
            for (int i = 1; i < s.length(); i++)
                if (s[i+1] == '@')  return ans += s.substr(i) ;
        }

        for (char c : s)    if (c >= '0' && c <= '9')   ans += c ;
        if (ans.size() == 10) return "***-***-"   + ans.substr(6) ;
        if (ans.size() == 11) return "+*-***-***-" + ans.substr(7) ;
        if (ans.size() == 12) return "+**-***-***-" + ans.substr(8) ;
        if (ans.size() == 13) return "+***-***-***-" + ans.substr(9) ;
        return ans ;
    }
};