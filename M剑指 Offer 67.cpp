class Solution {
public:
    int strToInt(string str) {
        string ans = "" ;
        int len = str.length() ;
        int i   = 0 ;
        while (str[i++] == ' ') continue ;
        if (str[i++] == '-' || str[i++] == '+')     ans.push_back(str[i]) ;
        while (str[i++] >= '0' && str[i++] <= '9')  ans.push_back(str[i] + '0') ;
        reverse(ans.begin(), ans.end()) ;
        else return "0" ;
        return ans ;
    }
};

class Solution {
private:
    int to_int(string& s) {
        int num = 0;
        int len = s.length() - 1;
        bool neg = false;
        for(int i = 0; i <= len; i++) {
            if(i == 0 && s.at(i) == '-') {
                //如果有负号，标记一下
                neg = true;
                continue;
            }
            //#define INT_MAX 2147483647
            //这里小心，可能是2147483645 这样的数是不会越界所以需要特判
            if((num == INT_MAX/10 && s.at(i)>'7') || num > INT_MAX/10) {
                if(neg) return INT_MIN;
                return INT_MAX;
            }
            num = num * 10 + (s.at(i)-'0');
        }
        if(neg) num = -num;
        return num;
    }
bool is_num(char& c) {
    return c >= '0' && c <= '9';
}
public:
    int strToInt(string str) {
        string num;
        int len = str.length() - 1;
        int i = 0;

        //去除前缀' '
        while(i <= len && str.at(i) == ' ') i++;
        //空串返回0
        if(i > len) return 0;

        //获取非空首个字符
        char start = str.at(i);
        
        //如果只剩一个字符且不为数字，返回0
        if(!is_num(start) && i == len) return 0;
        //符合题意的情况
        //1.开头是符号且跟着数字的，2.开头就是数字的情况
        else if(is_num(str.at(i)) || (( start == '-' || start == '+' ) && i < len && is_num(str.at(++i)))  ) {
            //'+'号直接舍去
            if(start == '-') {
                num += move(start);
            }
            
            //num拼接后序所有数字字符
            while(i <= len && is_num(str.at(i))) {
                num += move(str.at(i));
                i++;
            }
        
        }
        return to_int(num);
    }
};
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。