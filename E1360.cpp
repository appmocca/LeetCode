class Solution {
public:
    int toDay(const string& dateStr) {
        // https://leetcode-cn.com/problems/number-of-days-between-two-dates/solution/cyu-yan-0ms-14xing-jian-ji-dai-ma-jie-zhu-zellergo/
        int year, month, day;
        sscanf(dateStr.c_str(), "%d-%d-%d", &year, &month, &day);
        if (month <= 2) {
            year--;
            month += 10;
        }
        else month -= 2;
        return 365 * year + year / 4 - year / 100 + year / 400
             + 30 * month + (3 * month - 1) / 5 + day /* -584418 */;
    }
    int daysBetweenDates(string date1, string date2) {
        return abs(toDay(date1) - toDay(date2));
    }
};