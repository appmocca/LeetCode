class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        //Greendy Algorithm
        //If left ballon right side greater than next one left side, arrow++
        //If two ballons covers, update the min right boundry
        int len = points.size() ;
        sort(points.begin(), points.end()) ;
        if (!len)   return 0 ;
        int ans = 1 ;
        for (int i = 1; i < len; i++){
            if (points[i][0] > points[i-1][1])  ans++ ;
            else    points[i][1] = min(points[i-1][1], points[i][1]) ;
        }
        return ans ;
    }
};