class Solution 
{
public:
    //The secret is adding 1 and removeing the leading digit in binary
    string encode(int num) 
    {
        int n = num + 1;
        string res  = "";
        while (n != 1)
        {
            int x = n & 1;  //Removing the first 1 in binary
            res += ('0' + x);
            n >>= 1;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};