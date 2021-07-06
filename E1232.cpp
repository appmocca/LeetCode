class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int len = coordinates.size() - 1;
        for(int i = 1; i < len; ++i)
            if  ((coordinates[i][0] - coordinates[0][0])*    //Avoiding diciding calculation
                (coordinates[i][1] - coordinates[len][1])    //x-x1 * y-y2
                !=
                (coordinates[i][1] - coordinates[0][1])*     //y-y1 * x-x2
                (coordinates[i][0] - coordinates[len][0]))
                return false;
        return true;
    }
};