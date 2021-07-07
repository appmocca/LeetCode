class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        //Greendy Algorithm
        //Similar to Q452
        int len = intervals.size() ;
        int cnt = 1 ;
        if (!len)   return 0 ;
        sort(intervals.begin(), intervals.end()) ;
        for (int i = 1; i < len; i++){
            if (intervals[i][0] >= intervals[i-1][1]) cnt++ ;
            else intervals[i][1] = min(intervals[i-1][1], intervals[i][1]) ;
        }
        return len - cnt ;
    }
};