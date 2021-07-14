class Solution {
public:
    int hIndex(vector<int>& citations) {
        int len = citations.size() ;
        int lo = 0, hi = len ;
        while (lo < hi){
            int mid = lo + hi + 1 >> 1 ;
            if (check(citations, mid))  lo = mid ;
            else hi = mid - 1;
        }
        return hi ;
    }

    bool check(vector<int>& citations, int mid){
        int ans = 0 ;
        for (int times : citations) if (times >= mid) ans++ ;   //Since citations number mustnot less than hIndex
        return ans >= mid ; //Return if current number fits hIndex required
    }
};