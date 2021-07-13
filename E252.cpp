class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end()) ;
        if (intervals.size() < 2)   return true ;       //Dealing with [] situation
        for (int i = 0; i < intervals.size() - 1; i++)
            if (intervals[i][1] > intervals[i+1][0])    return false ;
        return true ;
    }
};

class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        map<int,int> mp ; 
        for (auto& t : intervals){
            mp[t[0]]++ ;
            mp[t[1]]-- ;
        }
        int sum = 0, ans = 0 ;
        for (auto& t : mp){
            sum += t.second ;
            ans = max(ans, sum) ;
        }
        return ans <= 1 ;
    }
};