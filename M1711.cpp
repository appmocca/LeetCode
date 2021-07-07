class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        int maxval = *max_element(deliciousness.begin(), deliciousness.end()) ;
        int maxsq  = maxval * 2 ;
        int mod    = 1'000'000'007 ;
        int ans    = 0 ;
        unordered_map<int,int> record ;
        for (int meal : deliciousness){
            for (int i = 1; i <= maxsq; i<<=1) //Search every square of 2
                if (record.count(i - meal))    ans = (ans + record[i-meal]) % mod ; //If found, add the number of equal value since the index is different
            record[meal]++ ;    //If not found, record current meal value
        }
        return ans ;
    }
};