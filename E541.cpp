class Solution {
public:
    string reverseStr(string s, int k) {
        int i = 0, len =s.size();
        while (i < len) {
            if (i + k > len) reverse(s.begin()+i, s.end());         //When the rest char less than k
            else             reverse(s.begin()+i, s.begin()+i+k);   //Making reverse
            i += 2*k;
        }
        return s;
    }
};