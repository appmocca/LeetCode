class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int len = points.size() ;
        int ans = 2 ;   //Since the number must greater than 3, the minans is 2
        if (len < 3)        return len ;
        for (int i = 0; i < len; i++){
            unordered_map<double,int> record ;
            for (int j = 0; j < len; j++){
                if (i != j){    //i & j must be different, or grdient=0 will be maxans
                    long long dy = points[i][0] - points[j][0] ;
                    long long dx = points[i][1] - points[j][1] ;
                    double grdient = dy * 1.0 / dx ;
                    if (record.count(grdient))      record[grdient]++ ;
                    else                            record[grdient] = 2 ;   //If none, current grdient has 2 points
                    ans = max(ans, record[grdient]) ;
                }
            }
        }
        return ans ;
    }
};