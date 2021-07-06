class Solution {
public:
    int findNthDigit(int n) {
        //Since the pattern is:
        // 1-9     have 9 numbers   and digit level is 1
        // 10-99   have 90 numbers  and digit level is 2
        // 100-999 have 900 numbers and digit level is 3
        // So base started from 9 and digit should make a self-adding
        long base = 9, digit = 1 ;
        int num = 0 ;
        while (n > base * digit){   //Finding the number in which level
            n -= base * digit ;
            num += base ;           //num is the starting number in current digit level, eg: 9 in level 1, 99 in 2
            base *= 10 ;
            digit++ ;
        }
        num += (n - 1) / digit + 1 ;
        int indexOfNumber = (n -1) % digit + 1 ;
        while (digit-- > indexOfNumber)   num /= 10 ;
        return num % 10 ;
    }
};

class Solution {
public:
    int findNthDigit(int n) {
        if(n == 0) {return 0;}

        int digit = 1; // 数位（个位/十位/百位/...，就是1/2/3/...）
        long start = 1; // 属于该数位的所有数的起始点数（个位是1，十位是10，百位是100）
        long index_count = digit * 9 * start; // 该数位的数一共的索引个数（不是数字个数）

        while(n > index_count ) {
            // 找出 n 属于那个数位里的索引
            n -= index_count; 
            ++ digit;
            start *= 10;
            index_count = digit * 9 * start;
        }
        // 上面的循环结束后：
        // digit 等于原始的 n 所属的数位；start 等于原始的 n 所属数位的数的起始点
        // index_count 等于原始的 n 所属数位的索引总个数（不重要了，下面不用）
        // n 等于在当前数位里的第 n - 1 个索引（索引从 0 开始算起）

        long num = start + (n - 1) / digit; // 算出原始的 n 到底对应那个数字
        int remainder = (n - 1) % digit; // 余数就是原始的 n 是这个数字中的第几位

        string s_num = to_string(num); // 将该数字转为 string 类型
        return int(s_num[remainder] - '0'); // n 对应着第 remainder 位，再转成 int
    }
};