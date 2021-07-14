class Solution {
public:
    string decodeString(string s) {
        string res = "" ;
        stack<string> strs ;
        stack<int>    nums ;
        int num = 0, len = s.size() ;
        for (int i = 0; i < len; i++){
            if (isdigit(s[i]))  num = num * 10 + s[i] - '0' ;   //Counting repeating times
            else if (isalpha(s[i])) res += s[i] ;               //Recording recursive alpha
            else if (s[i] == '['){                              //When meet [ need to push nums & str into stack
                nums.push(num) ;
                num = 0 ;
                strs.push(res) ;
                res = "" ;
            }
            else {                                              //When meet ] need to repeating strings
                int times = nums.top() ; nums.pop() ;
                for (int i = 0; i < times; i++ )  strs.top() += res ;
                res = strs.top() ;  strs.pop() ;
            }
        }
        return res ;
    }
};